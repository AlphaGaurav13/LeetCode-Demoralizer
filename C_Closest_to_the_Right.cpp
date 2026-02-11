#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// lower bound

ll LB(vector<ll>&arr, ll x) {

    ll low = 0, high = arr.size() - 1;
    ll ans = arr.size() + 1;
    while(low <= high) {
        ll mid = low + (high - low) / 2;
        if(arr[mid] >= x) {
            ans = mid + 1 ;
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
    for(int i = 0; i < n; i++) cin >> arr[i];


    while(k--) {
        ll x;
        cin >> x;

        cout << LB(arr, x) << endl;
    }
    
    

    return 0;
}