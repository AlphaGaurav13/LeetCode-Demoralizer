#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

bool isFeasible(vector<ll>&arr, ll t, ll time) {
    ll sum =  0;
    for(size_t i = 0; i < arr.size(); i++) {
        sum += time / arr[i]; 
    }
    return sum >= t;
}

int main() {
    int n, t;
    cin >> n >> t;
    vector<ll> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    ll low = 1;
    ll high = *max_element(begin(arr), end(arr)) * 1LL * t;
    ll ans = high;
    while(low <= high) {

        ll mid = low + (high - low) / 2;
        if(isFeasible(arr, t, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}