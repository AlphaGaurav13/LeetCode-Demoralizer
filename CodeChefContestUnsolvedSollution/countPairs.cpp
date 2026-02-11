#include <bits/stdc++.h>
using namespace std;

long long countPairsLessThanX(vector<int>& arr, int x) {
    // Write your code here
    int n = arr.size();
    int temp = n / 2;
    long long ans = (n - temp) *  temp;
    return ans;
}

int main() {
    int n, x;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> x;
    cout << countPairsLessThanX(arr, x) << endl;
    return 0;
}