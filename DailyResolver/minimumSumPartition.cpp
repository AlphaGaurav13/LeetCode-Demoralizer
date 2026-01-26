#include<bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    
        int sum = accumulate(begin(arr), end(arr), 0);
        vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1, false));
        for(int i = 0; i <= n; i++) {
            // for(int j = 0; j <= sum; j++) {
                dp[i][0] = true; 
            // }
        }
        
        
        
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= sum; j++) {
                if(arr[i - 1] <= j) {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
                }else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        
        // (range - 2s1) minimize kar;
        
        vector<int> temp;
        
        for(int j = 0; j <= sum / 2; j++) {
            if(dp[n][j] == true) {
                temp.push_back(j);
            }
        }
        
        int ans = INT_MAX;
        for(int i = 0; i < temp.size(); i++) {
            // if(ans > temp[i]) {
                ans = min(ans, sum - (2 * temp[i]));
                // cout << ans << endl;
            // }
        }

        // cout << "Range : " << sum << endl;

        cout << ans << endl;
        // for(int i = 0; i < temp.size(); i++) {
        //     cout << temp[i] << " ";
        // }

    return 0;
}