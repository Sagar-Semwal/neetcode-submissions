class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (int n : nums) {
            mp[n]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int count = 1;

            if (mp.find(nums[i] - 1) == mp.end()) {
                for (int j = 1; j < n; j++) {
                    if (mp.find(nums[i] + j) != mp.end()) {
                        count++;
                    } else {
                        break;
                    }
                }
            }
            ans = max(ans, count);
        }

        return ans;
    }
};
