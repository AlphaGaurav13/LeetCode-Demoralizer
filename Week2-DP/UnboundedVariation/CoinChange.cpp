#include<bits/stdc++.h>
using namespace std;

// Coin - 2(count the number of ways  we can make the sum)
int main() {

    int n;
    cin >> n;


    vector<int> coins(n);

    for(int i = 0; i < n; i++) cin >> coins[i];

    int sum;
    cin >> sum;


    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));

    for(int i = 0; i <= n; i++) {

        dp[i][0] = 1;
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= sum; j++) {

            
            if(j >= coins[i - 1]) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i - 1]];
            }else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][sum] << endl;
    return 0;
}