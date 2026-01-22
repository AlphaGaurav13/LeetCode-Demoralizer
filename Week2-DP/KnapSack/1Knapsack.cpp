#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int KS(vector<int>&wt, vector<int>&val, int w, int n) {
    
    if(n == 0 || w == 0) return 0;

    if(dp[n][w] != -1) return dp[n][w];

    if(wt[n - 1] <= w) {
        return dp[n][w] = max(val[n - 1] + KS(wt, val, w - wt[n - 1], n - 1), KS(wt, val, w, n - 1));
    }
    if(wt[n - 1] > w) {
        return dp[n][w] = KS(wt, val, w, n - 1);
    }
    
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n, w;
    cin >> n >> w;
    vector<int> wt(n);
    vector<int> val(n);
    for(int i = 0; i < n; i++) cin >> wt[i];
    for(int i = 0; i < n; i++) cin >> val[i];

    memset(dp, -1, sizeof(dp));

    cout << KS(wt, val, w, n) << endl;

    return 0;
}