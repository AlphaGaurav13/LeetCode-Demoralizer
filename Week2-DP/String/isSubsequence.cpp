#include<bits/stdc++.h>
using namespace std;


int solve(string s, string t) {

    int n = s.size();
    int m = t.size();
    if(n == 0 and m == 0) return true;
    if(n != 0 and m == 0) return false;
    if(n == 0 and m == 0) return true;

    int i = 0, j = 0;
    while(i < n and j < m) {
        if(s[i - 1] == t[j - 1]) {
            i++;
        }

        if(i == n) return true;
        j++;
    }

    return false;
}
int main() {

    string s, t;
    cin >> s >> t;

    int n = solve(s, t);
    cout << n << endl;
    return 0;
}
