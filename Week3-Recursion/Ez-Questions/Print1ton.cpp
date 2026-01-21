#include<bits/stdc++.h>
using namespace std;



void solve(int n) {

    if(n == 1) {
        cout << 1 << endl;
        return;
    }

    solve(n - 1);
    cout << n << endl; 
}
int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; 
    cin >> n;

    solve(n);

    return 0;
}