#include<bits/stdc++.h>
using namespace std;
void insert(vector<int>&arr, int temp) {
    if(arr.size() == 0 || arr.back() <= temp) {
        arr.push_back(temp);
        return;
    }

    int hero = arr.back();
    arr.pop_back();

    insert(arr, temp);
    arr.push_back(hero);
}

void sort(vector<int>&arr) {
    if(arr.size() == 0 || arr.size() == 1) { // this is Base case
        return;
    }

    int temp = arr.back();
    arr.pop_back();

    sort(arr); // this is hypothesis here
    insert(arr, temp);  //this is induction here
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);


    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr);

    for(int i : arr) {
        cout << i << " ";
    }
}