#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];


    int sum;
    cin >> sum;
    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));

    for(int i = 0; i <= n; i++) {
        dp[i][0] = true;
    }


    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= sum; j++) {
            if(nums[i - 1] <= j) {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
            }else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][sum] << endl;
    return 0;
}