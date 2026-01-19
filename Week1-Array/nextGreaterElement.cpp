/**
 *    author:  WhiteLion
 *    created: 20
 **/
#include <bits/stdc++.h>

using namespace std;


vector<int> solve(vector<int> &nums) {

    stack<int> st;
    unordered_map<int, int> mp;
    int n = nums.size();
    vector<int> ans(n);
    


    for(int i = 0; i < n; i++) {
        while(!st.empty() and nums[st.top()] < nums[i]) {
            mp[st.top()] = i; // we are doing by storing the indexs here!
            st.pop();
        }

        st.push(i);
    }

    while(!st.empty()) {
        mp[st.top()] = -1;
        st.pop();
    }


    for(int i = 0; i < n; ++i) {
        if(mp[i] == -1) {
            ans[i] = -1;
        }else {
            ans[i] = nums[mp[i]];
        }
    }
    
    
    return ans;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> nums(n);

  for(int i = 0; i < n; i++) cin >> nums[i];


  vector<int> nge = solve(nums);

  for(int i = 0; i < n; i++) {
    cout << nge[i] << " ";
  }


  return 0;
}