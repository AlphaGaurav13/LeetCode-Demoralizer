/**
 *    author:  WhiteLion
 *    created: 2026-02-14
 **/
#include <bits/stdc++.h>
using namespace std;

int dp[46];

int solve(int n) {

    // top-to-bottom

    // if(n < 0) return 0;
    // if(n == 0) return 1;

    // if(dp[n] != -1) return dp[n];

    // int one_step = solve(n - 1);
    // int two_step = solve(n - 2);
    
    
    // return dp[n] = one_step + two_step;

    // bottom-to-up

    // dp[0] = 0, dp[1] = 1;
    // dp[2] = 2;

    // if(n == 1 || n == 2) return n;

    // for(int i = 3; i <= n; i++) {
    //     dp[i] = dp[i - 1] + dp[i - 2];
    // }

    // return dp[n];

    // normal fibbo pattern

    int a = 1;
    int b = 2;
    int c = 0;

    if(n == 1 || n == 2) return n;

    for(int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
} 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  memset(dp, -1, sizeof(dp));
  cout << solve(n) << endl;

  return 0;
}