#include <bits/stdc++.h>
using namespace std;

void sortArrayByParity(vector<int>& nums) {
    // Write your code here
   vector<int> temp;
   for(int i = 0; i < nums.size(); i++) {
      if(nums[i] % 2 == 1) {
          temp.push_back(nums[i]);
      }
   }
   
   for(int i = 0; i < nums.size(); i++) {
       if(nums[i] % 2 == 0) {
           temp.push_back(nums[i]);
       }
   }
   
   for(int i = 0; i < nums.size(); i++) {
       nums[i] = temp[i];
   }
}

int main() {
    int N;
    cin >> N;
    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    sortArrayByParity(nums);

    for (int i = 0; i < N; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}