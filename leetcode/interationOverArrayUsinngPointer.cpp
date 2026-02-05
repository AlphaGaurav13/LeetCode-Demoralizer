#include<bits/stdc++.h>
using namespace std;



int main() {

    vector<int> arr = {1,2,3};
    int n = arr.size();
    int *temp = &arr[0];
    // for(int i = 0; i < n; i += 1) {

    //     cout << *(temp+i) << " "; 
    // }
    cout << *temp << endl; //value
    cout << temp << endl; //address

    cout << temp + 1 << endl; // address into the ram with + 4

    return 0;
}