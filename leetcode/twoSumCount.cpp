#include<bits/stdc++.h>
using namespace std;


int twoSumcount(vector<int>&arr1, vector<int>&arr2) {

    unordered_map<int, int> mp;
    for(int i = 0; i < arr.size(); i++) {
        mp[arr1[i]]++;
    }

    int count = 0;

    for(int it : mp) {
        f
    }
}

vector<vector<int>> solve(vector<int>&arr, int target) {
    unordered_map<int, int> mp;
    vector<vector<int>> ans;

    for(size_t i = 0; i < arr.size(); i++) {
        int compliment = target - arr[i];

        if(mp.count(compliment)) {
            ans.push_back({arr[i], arr[mp[compliment]]});
        }

        mp[arr[i]] = i;
    }

    return ans;
}

int main() {


    vector<int> arr = {1,0,-1,0,-2,2};

    vector<vector<int>> ans = solve(arr, 0);


    for(size_t i = 0; i < ans.size(); i++) {
        for(size_t j = 0; j < ans[0].size(); j++) {
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }

    return  0;
}