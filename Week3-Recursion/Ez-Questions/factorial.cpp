#include<bits/stdc++.h>
using namespace std;


int solve(int n) {
    if(n == 1)  {
        return 1;
    }

    return n * solve(n - 1);
}
int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int ans = solve(n);
    cout << ans << endl;


    return 0;
}