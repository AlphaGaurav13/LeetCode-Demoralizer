#include<bits/stdc++.h>
using namespace std;


int main() {

    vector<int> arr = {1,2,5,10,10,10};
    int low = 0;
    int high = arr.size() - 1;
    

    int target = 5;
    int Locc = INT_MAX;
    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target) {
            Locc = min(Locc, mid);
            high = mid - 1;
        }else if(arr[mid] < target){
            low = mid + 1;
        }else {
            high = mid - 1;
        }
    }

    int Rocc = INT_MIN;
    low = 0;
    high = arr.size() - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target) {
            Rocc = max(Rocc, mid);
            low = mid + 1;
        }else if(arr[mid] > target) {
            high = mid - 1;
        }else {
            low = mid + 1;
        }
    }


    cout << Rocc - Locc + 1 << endl;
    return 0;
}