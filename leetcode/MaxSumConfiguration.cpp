#include<bits/stdc++.h>
using namespace std;

    // THIS IS THE BRUTE FORCE 
    // void rotate(vector<int>&arr) {
    //     int n = arr.size();
    //     int k = 1;
    //     k = k % n;
        
    //     reverse(arr.begin(), arr.end());
    //     reverse(arr.begin(), arr.begin() + k);
    //     reverse(arr.begin() + k, arr.end());
    // }
    // int getSum(vector<int>&arr) {
    //     int ans = 0;
    //     for(size_t i = 0; i < arr.size(); i++) {
    //         ans += arr[i] * i;
    //     }


    //     return ans;
    // }
    // int maxSum(vector<int> &arr) {
    //     // code here
    //     int ans = 0;
    //     int n = arr.size();
    //     for(int i = 0; i < n; i++) {
            
    //         ans = max(ans, getSum(arr));
    //         rotate(arr);
    //     }
        
    //     return ans;
    // }


    // Optimized soolution


    int maxSum(vector<int>&arr) {


        int sum = 0, sum1 = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++) {
            sum += arr[i];

            sum1 += arr[i] * i;
        }


        int ans = sum1;

        for(int i = 1; i < n; i++) {
            sum1 = sum1 - sum + arr[i - 1] * n;
            ans = max(ans, sum1); 
        }

        return ans;
    }
 



    int main() {

        vector<int> arr = {1, 2, 3};
        int ans = maxSum(arr);
        cout << ans << endl;

        return  0;
    }



