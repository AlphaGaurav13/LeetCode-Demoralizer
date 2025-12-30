/**
 *    author:  WhiteLion
 *    created: 30
 **/
#include <bits/stdc++.h>
using namespace std;


// writing answer here!


int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<vector<int>> temp(n, vector<int>(m));
  
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> temp[n][m];
    }
  }

  vector<vector<int>> ans = solve(temp);

  for(int i = 0; i < ans.size(); i++) {
    cout << "[" << " ";
    for(int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << " ]" << endl;
  }

  
  return 0;
}