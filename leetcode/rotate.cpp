#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&arr, int start, int end) {

    while(start < end) {
        swap(arr[start++], arr[end--]);
    }
}

int main() {

    vector<int> arr = {9,2, 8, 9, 1, 2};
    int k = -2;
    int n = arr.size();
    k = (k % n + n) % n;
    
    
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    


    for(int x : arr) {
        cout << x << " ";
    }

    cout << endl;
    // vector<int> arr1 = {9,2, 8, 9, 1, 2};
    // int m = 2;
    // int a = arr1.size();
    // m = (m % a + a) % a;

    // reverse(arr, 0, a - 1);
    // reverse(arr, m - 1, a - 1);
    // reverse(arr, 0, m - 1);

    // for(int x : arr1) {
    //     cout << x << " ";
    // }

    return 0;
}