/**
 *    author:  WhiteLion
 *    created: 2026-02-13
 **/
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n,m;
  cin >> n >> m;

  vector<vector<int>> chessboard(n, vector<int>(m, 0));

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
        chessboard[i][j] = (i + j) % 2;
    }
  }

  for(auto &x : chessboard) {
    for(int temp : x) {
        cout << temp << " ";
    }
    cout << endl;
  }
  return 0;
}