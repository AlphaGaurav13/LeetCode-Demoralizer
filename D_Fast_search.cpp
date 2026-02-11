#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    int k;
    cin >> k;
    while(k--) {
        int a, b;
        cin >> a >> b;

        auto it = lower_bound(arr.begin(), arr.end(), a) - arr.begin();

        auto it1 = upper_bound(arr.begin(), arr.end(), b) - arr.begin();

        cout << it1 - it << " ";
    }

    return 0;
}