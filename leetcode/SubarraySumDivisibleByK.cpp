class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        // this is the optimized brute force.
        vector<int> arr(n);
        arr[0] = nums[0];
        for(int i = 1; i < n; i++) {
            arr[i] = arr[i - 1] + nums[i];
        }
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                int sum = 0;
                if(i == 0) {
                    sum = arr[j];
                }else {
                    sum = arr[j] - arr[i - 1];
                }

                if(sum % k == 0) {
                    ans++;
                }
            }
        }

        return ans;
    }
};