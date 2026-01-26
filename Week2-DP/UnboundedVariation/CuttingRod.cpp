#include<bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];


    vector<int> len(n);

    for(int i = 0; i < n; i++) len[i] = i + 1;


    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j  <= n; j++) {

            if(j >= len[i - 1]) {
                dp[i][j] = max(dp[i - 1][j], arr[i - 1] + dp[i][j - len[i - 1]]);
            }else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << dp[n][n] << endl;
 
    return 0;
}