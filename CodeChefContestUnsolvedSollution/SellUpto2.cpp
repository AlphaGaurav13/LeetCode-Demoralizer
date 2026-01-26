/*
 *    author:  WhiteLion
 *    created: 24
 *
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> arr(n);
  for(int i = 0; i < n; i++) cin >> arr[i];


  vector<vector<int>> dp(n + 1, vector<int>(n + 1, INT_MIN));
  for(int i = 0; i <= n; i++) {
    dp[i][0] = 0;
  }

  for(int i = 1; i <= n; i++) {
    for(int j  = 0; j <= i; j++) {

      dp[i][j] = max(dp[i][j], dp[i - 1][j]);

      if(j - 1 >= 0 and dp[i - 1][j - 1] != INT_MIN) {
        dp[i][j] =max(dp[i][j], dp[i - 1][j - 1] + arr[i - 1]);
      }

      if(j - 2 >= 0 and dp[i - 1][j - 2] != INT_MIN) {
        dp[i][j] = max({dp[i][j], dp[i - 1][j - 2]+ (2 * arr[i - 1])});
      }

    }
  }

  int ans = 0;
  for(int j = 0; j <= n; j++) ans = max(ans, dp[n][j]);
  cout << ans << "\n";
  return 0;
}