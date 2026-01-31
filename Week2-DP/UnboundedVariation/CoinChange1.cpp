#include<bits/stdc++.h>
using namespace std;



// these coins and variation of subset sum and unbounded.
int main() {

    int n;
    cin >> n;


    vector<int> coins(n);

    for(int i = 0; i < n; i++) cin >> coins[i];

    int sum;
    cin >> sum;

    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, INT_MAX - 1));

    for(int i = 0; i <= n; i++) {
        dp[i][0] = 0;
    }

    for(int j = 1; j <= sum; j++) {
        if(j % coins[0] == 0) {
            dp[1][j] = (j / coins[0]);
        }else {
            dp[1][j] = INT_MAX - 1;
        }
    }


    for(int i = 2; i <= n; i++) {
        for(int j = 1; j <= sum; j++) {
           
            if(j >= coins[i - 1]) {
                dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - coins[i - 1]]);
            }else {
                 dp[i][j] = dp[i - 1][j];
        }
    }
}

    int ans = dp[n][sum] == INT_MAX - 1 ? -1 : dp[n][sum];

    cout << ans << endl;
    return 0;
}