#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool BS(vector<ll>&arr, ll elem) {
    int low = 0, high = arr.size() - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == elem) {
            return true;
        }else if(arr[mid] < elem) {
            low = mid + 1;
        }else {
            high = mid - 1;
        }
    }

    return false;
}

int main() {

    int n, k;
    cin >> n >> k;


    vector<ll> arr(n);
    vector<ll> arr1(k);

    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < k; i++) cin >> arr1[i];

    for(int i = 0; i < k; i++) {
        if(BS(arr, arr1[i])) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }

    return  0;
}