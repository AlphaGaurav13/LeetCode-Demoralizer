#include<bits/stdc++.h>
using namespace std;

void segIt(vector<int>&arr) {
    int n = arr.size();
    int pt1 = -1, itr = 0, pt2 = n - 1;

    while(itr <= pt2) {
        if(arr[itr] == 0) {
            swap(arr[++pt1], arr[itr++]);
        
        }else if(arr[itr] == 1) {
            itr++;
        }else {
            swap(arr[pt2--], arr[itr]);
        }
    }
}


int main() {

    vector<int> arr = {0,1,0, 2, 0, 1, 1, 2, 0, 2, 1, 2};
    segIt(arr);


    for(int it : arr) {
        cout << it << " ";
    }

    return 0;

}