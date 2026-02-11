#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// lower bound concept --> { 1 if arr[mid] >= x ; 0 if arr[mid] > x
// ll BS(vector<ll>&arr, ll x) {
//     ll low = 0, high = arr.size() - 1;
//     ll ans = 0;
//     while(low <= high) {
//         ll mid = low + (high - low) / 2;
//         if(arr[mid] <= x) {
//             ans = mid + 1;
//             low = mid + 1;
//         }else if(arr[mid] < x){
//             low = mid + 1;
//         }else {
//             high = mid  - 1;
//         }
//     }
//     return ans;
// }

// solved using upper bound.
ll BS(vector<ll>&arr, ll x) {
    ll low = 0, high = arr.size() - 1, n = arr.size();
    ll ans = n;

    while(low <= high) {
        ll mid = low + (high - low) / 2;
        if(arr[mid] > x) {
                ans = mid;
            
            high = mid - 1;
        }else {
            low = mid + 1;
        } 
    }

    return ans;
}


int main() {

    int n, k;
    cin >> n >> k;

    vector<ll> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while(k--) {
        ll x;
        cin >> x;
        
        ll found = BS(arr, x);
        cout << found << endl;
    }

    return 0;
}