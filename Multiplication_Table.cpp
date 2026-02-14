/**
 *    author:  WhiteLion
 *    created: 2026-02-12
 **/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool checkfun(ll x, ll n) {
    ll count = 0;
    for(ll i = 1; i <= n; i++) {
        count += min(n, x / i);
    }
    return count >= (n * n + 1) / 2;
}




int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  ll n;
  cin >> n; 

  ll low = 1;
  ll high = (n * n);
  ll ans = high;
  while(low <= high) {
    ll mid = low + (high - low) / 2;
    if(checkfun(mid, n)) {
        ans = mid;
        high = mid - 1;
    }else {
        low = mid + 1;
    }
  }


  cout << ans << endl;
  return 0;
}