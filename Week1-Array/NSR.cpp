/**
 *    author:  WhiteLion
 *    created: 20
 **/
#include <bits/stdc++.h>
using namespace std;

// to find the width we need store the index of elements in NSR AND NSL.

// NSR me not found case me n store karna hai
// NSL me not found case me -1 store karna hai

vector<int> solve(vector<int> &heights) {
    stack<int> st;
    int n = heights.size();
    vector<int> NSR(n);

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


vector<int> solve1(vector<int>&heights) {
    stack<int> st;
    int n = heights.size();
    vector<int>NSL(n);

    for(int i = 0; i < n; i++) {
        if(st.empty()) {
            NSL[i] = -1;
        }else {
            while(!st.empty() && heights[st.top()] >= heights[i]) {
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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> heights(n);
  for(int i = 0; i < n; i++) cin >> heights[i];

  vector<int>NSL = solve1(heights);
  vector<int> NSR = solve(heights);


  vector<int> width(n);

  for(int i = 0; i < n; i++) {
    width[i] = NSR[i] - NSL[i] - 1;
  }
  

  int maxArea = 0;
  for(int i = 0; i < n; i++) {
    maxArea = max(maxArea, heights[i] * width[i]);
  }

  cout << maxArea << endl;

  return 0;
}