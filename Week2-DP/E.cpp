#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        vector<int>  arr(n);
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        vector<pair<int, int>> temp;
        int val = 1;
        for(int i = 0; i < n; i++) {
            temp.push_back({arr[i], val});
            val++;
        }
        
        sort(temp.begin(), temp.end());
        // int ans = 0;
        // int rf = 0;
        // for(int i = n - 1; i >= 0; i--) {
            
        //     if(temp[i].second - rf >= 2) {
        //         ans += temp[i].first * 2;
        //         rf += 2;
        //     }else if(temp[i].second - rf < 2 and temp[i].second - rf >= 0) {
        //         ans += temp[i].first;
        //         rf += 1;
        //     }
        // }
        
        // cout << ans << endl;

        for(int i = 0; i < n; i++) {
            cout << temp[i].first << " " << temp[i].second << " ";
        }
        
        
    }
}
