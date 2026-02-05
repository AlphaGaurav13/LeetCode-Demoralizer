class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {

        unordered_map<int,int> freq;
        freq[0] = 1;

        int prefix = 0;
        int ans = 0;

        for(int x : nums) {

            if(x % 2) prefix++;   

            if(freq.count(prefix - k))
                ans += freq[prefix - k];

            freq[prefix]++;
        }

        return ans;
    }
};
