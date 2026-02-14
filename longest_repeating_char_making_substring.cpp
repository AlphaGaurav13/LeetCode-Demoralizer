/**
 *    author:  WhiteLion
 *    created: 2026-02-13
 **/
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;

  int n = s.size();

  int ans = 1;
  int count = 1;

  for(int i = 1; i < n; i++) {
    if(s[i - 1] == s[i]) {
        count++;
    }else {
        count = 1;
    }

    ans = max(ans, count);
    
  }

  cout << ans << endl;
  return 0;
}