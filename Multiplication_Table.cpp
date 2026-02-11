#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main() {

    ll n;
    cin >> n;
    vector<vector<ll>> arr(n, vector<ll>(n, 0));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr[i][j] = (i + 1) * (j + 1);
        }
    }

    vector<ll> temp;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            temp.push_back(arr[i][j]);
        }
        cout << endl;
    }

    sort(temp.begin(), temp.end());

    ll low = 0;
    ll high = temp.size() - 1;
    ll mid = low + (high - low) / 2;
    cout << temp[mid] << endl;

    return 0;
}