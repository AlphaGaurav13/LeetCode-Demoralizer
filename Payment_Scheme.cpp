#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        vector<int> w(n), l(n);
        
        for(int i = 0; i < n; i++) cin >> w[i];
        for(int i = 0; i < n; i++) cin >> l[i];
        
       int ans = 0;
       for(int i = 0; i < n; i++) {
           int temp = 0;
           for(int j = 0; j < n; j++) {
               if(i == j)  {
                 continue;
               }
               temp += w[i];
           }
           
           ans = max(ans, temp);
       }
       
       cout << ans << endl;
    }
}
