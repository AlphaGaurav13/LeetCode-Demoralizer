#include<bits/stdc++.h>
using namespace std;

int main() {


    vector<int> arr = {10,9,8,7,6,5,4,3,2,1};


    int low = 0;
    int high = arr.size();
    int target = 8;

    bool lock = false;
    while(low <= high) {
        int mid = low + (high - low)/2;

        if(arr[mid] == target) {
            cout << mid << endl;
            lock = true;
            break;
        }else if(arr[mid] > target){
            low = mid + 1;
        }else {
            high = mid - 1;
        }
    }


    if(!lock) {
        cout << "-1" << endl;
    }

    return 0;
}