#include<bits/stdc++.h>
using namespace std;


void reverseIt(vector<int>& arr, int start, int end) {
    while(start < end) {
        swap(arr[start++], arr[end--]);
    }
}
    

int main() {


    vector<int> arr = {9,7,2,8,6, 3};

    int n = arr.size();
    int k = -2;  // means rotating left to right moving the last two to first left rotate
    // k > 0 means  
    k = (k % n  + n) % n;
    vector<int> arr1 = {9,7,2,8,6, 3};
    int k1 = -2;

    k1 = k1 % n;
    // 
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());

    reverse(arr1.begin(), arr1.end());
    reverse(arr1.begin(), arr1.begin() + k1);
    reverse(arr1.begin() + k1, arr1.end());
    
    

    // for(int x : arr1) {
    //     cout << x << " ";
    // }

    cout << endl;

    for(int x : arr) {
        cout << x << " ";
    }





    return 0;
}