#include<bits/stdc++.h>
using namespace std;



int solve(vector<int>&wt, vector<int>&val, int w, int n){

    vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));
    // for(int i = 0; i<= n; i++) {
    //     for(int j = 0; j <= w; j++) {
    //         if(i == 0 || j == 0) {
    //             dp[i][j] = 0;
    //         }
    //     }
    // }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= w; j++) {
            if(j >= wt[i - 1]) {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            }else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][w];
}


int main() {


    int n;
    cin >> n;


    vector<int> wt(n);
    vector<int> val(n);

    for(int i = 0; i < n; i++) cin >> wt[i];
    for(int i = 0; i < n; i++) cin >> val[i];
    int w;
    cin >> w;
    int ans = solve(wt, val, w, n);

    cout << ans << endl;
}