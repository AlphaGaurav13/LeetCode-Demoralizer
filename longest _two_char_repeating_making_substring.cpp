/**
 *    author:  WhiteLion
 *    created: 2026-02-13
 **/
#include <bits/stdc++.h>
using namespace std;

int solve(string s, char str1, char str2) {
  int n = s.size();
  int counta = 0, countb = 0;
  int ans = 0;
  unordered_map<int, int> mp;
  mp[0] = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == str1) counta++;
    else if(s[i] == str2) countb++;
    if(counta == countb) ans = max(ans, counta + countb);
    int diff = counta - countb;
    if(mp.count(diff)) {
      ans = max(ans, i - mp[diff]);
    }else {
      mp[diff] = i;
    }
  }

  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;
  int n = s.size();
  int maxl = solve(s, 'a', 'b');
  cout << maxl << endl;
  return 0;
}