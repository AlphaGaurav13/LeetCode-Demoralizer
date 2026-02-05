#include<bits/stdc++.h>
using namespace std;


void segIt(vector<int>&arr) {

    int pt = -1, itr = 0;
    int n = arr.size();
    while(itr < n) {
        if(arr[itr] < 0) {
            
            swap(arr[itr], arr[++pt]);
        }
        itr++;
    }

}

int main() {
    vector<int> arr = {1,2,3,-1,-2,-3};

    segIt(arr);
    for(int it : arr) {
        cout << it << " ";
    }

    return 0;
}