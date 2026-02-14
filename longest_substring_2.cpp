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


  int ans = 0, n = s.size();

  for(int i = 0; i < n; i++) {
    int a = 0, b = 0, c = 0;
    for(int j = i; j < n; j++) {
        if(s[j] == 'a') a++;
        else if(s[j] == 'b') b++;
        else c++;

        vector<int> v;
        if(a) v.push_back(a);
        if(b) v.push_back(b);
        if(c) v.push_back(c);
        bool lock = true;
        for(int k = 1; k < v.size(); k++) {
            if(v[k] != v[0]) lock = false; 
        }
        if(lock) ans = max(ans, j - i + 1);
    }
  }

  cout << ans << endl;

  return 0;
}

// brute force sollution