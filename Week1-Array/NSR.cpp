/**
 *    author:  WhiteLion
 *    created: 20
 **/
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &heights) {
    stack<int> st;
    int n = heights.size();
    vector<int> NSR(n);

    for(int i = n - 1; i >= 0; i--) {
        if(st.empty()) {
            NSR[i] = -1;
        }else {
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }

            if(st.empty()) {
                NSR[i] = -1;
            }else {
                NSR[i] = heights[st.top()];
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
                NSL[i] = heights[st.top()];
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

  vector<int>NSR = solve1(heights);
  for(int i = 0; i < n; i++) {
    cout << NSR[i] << " ";
  }

  return 0;
}