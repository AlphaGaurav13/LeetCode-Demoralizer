#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool canFit(ll w, ll h, ll n, ll cap) {
    ll max_w = cap / w;
    ll max_h = cap / h;
    if(max_w == 0 || max_h == 0) return false;
    return max_w >= (n + max_h - 1) / max_h; // n + max_h - 1 is used to avoid the over flow
}

int main() {

    ll w, h, n;
    cin >> w >> h >> n;
    
    ll low = 1;
    ll high = max(w, h) * n;
    ll ans = high;
    while(low <= high) {
        ll mid = low + (high - low) / 2;
        if(canFit(w, h, n, mid)) {
            ans = mid;
            high = mid - 1;
        }else {
            low = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}