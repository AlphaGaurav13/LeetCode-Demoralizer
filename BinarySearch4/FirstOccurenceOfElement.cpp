#include<bits/stdc++.h>
using namespace std;


int main() {

    vector<int> arr = {1,2,4,4,5,10,10,10,18,19,21,22,23,50,100};

    int ans = INT_MAX;

    int low = 0;
    int high = arr.size() - 1;
    int target = 10;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) {
            ans = min(ans, mid);
            high = mid - 1;
        }else if(arr[mid] > target) {
            high = mid - 1;
        }else {
            low = mid + 1;
        }
    }


    cout << "First occurence of " << target << " " << "is : " << (ans == INT_MAX ? -1 : ans) << endl;
    return 0;
}