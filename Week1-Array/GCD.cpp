/**
 *    author:  WhiteLion
 *    created: 20
 **/
#include <bits/stdc++.h>
using namespace std;

// GCD is use to calculate the greatest comman divisor max number which can divide both the numbers. we can also find the lcm
// with the help of gcd formula lcm(a,b) = (a * b) / gcd(a,b);


// key points to remember -> divisor become dividend and remainder become divisor until remainder become 0.

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  int ans = gcd(n, m);

  cout << ans << endl;
  return 0;
}