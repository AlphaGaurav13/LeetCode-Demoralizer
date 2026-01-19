/**
 *    author:  WhiteLion
 *    created: 20
 **/
#include <bits/stdc++.h>
using namespace std;

vector<int> getNSR(vector<int> &heights) {
    stack<int> st;


    int n = heights.size();
    vector<int>NSR(n);

    for(int i = n - 1; i >= 0; i--) {
        if(st.empty()) {
            NSR[i] = n;
        }else {
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if(st.empty()) {
                NSR[i] = n;
            }else {
                NSR[i] = st.top();
            }
        }
        st.push(i);
    }

    return NSR;
}

vector<int> getNSL(vector<int>&heights) {
    int n = heights.size();

    stack<int> st;
    vector<int>NSL(n);
    for(int i = 0; i < n; i++) {
        if(st.empty()) {
            NSL[i] = -1;
        }else{
            while(!st.empty() and heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if(st.empty()) {
                NSL[i] = -1;
            }else {
                NSL[i] = st.top();
            }
        }

        st.push(i);
    }

    return NSL;
}

int getArea(vector<int>&heights) {
    vector<int> NSR = getNSR(heights);
    vector<int> NSL = getNSL(heights);
    int n = heights.size();
    vector<int> width(n);
    for(int i = 0; i < n; i++) {
        width[i] = NSR[i] - NSL[i] - 1;
    }


    int maxArea = 0;

    for(int i = 0; i < n; i++) {
        maxArea = max(maxArea, heights[i] * width[i]);
    }

    return maxArea;
}

int solve(vector<vector<char>>&matrix){
    int n = matrix.size();
    vector<int> heights(n);
    

    for(int i = 0; i < n; i++) {
        if(matrix[i][0] == '1') {
            heights[i] = 1;
        }else {
            heights[i] = 0;
        }
    }

    int ans = getArea(heights);


    for(int row = 1; row < matrix.size(); row++) {
        for(int col = 1; col < matrix[0].size(); col++) {
            if(matrix[row][col] == '0') {
                heights[col] = 0;
            }else {
                heights[col] += 1;
            }
        }

        ans = max(ans, getArea(heights));
    }

    return ans;
    
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<vector<char>> matrix(n, vector<char>(m));


  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
        cin >> matrix[i][j];
    }
  }


  int maxRectangle = solve(matrix);
  cout << maxRectangle << endl;
  return 0;
}