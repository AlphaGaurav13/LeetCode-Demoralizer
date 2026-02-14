#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tt;
    cin >> tt;
    while(tt--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];
        
        unordered_map<int> mp;
        
        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        
        vector<int> temp;
        int maxfreq = 0;
        for(auto it : mp) {
            if(it.second > maxfreq) {
                maxfreq = it.second;
            }
        }
        
        for(auto it : mp) {
            if(it.second == maxfreq) {
                temp.push_back(it.first);
            }
        }
        
        sort(temp.begin(), temp.end());
        
        cout << temp[temp.size() - 1] << endl;
        
    }
}
