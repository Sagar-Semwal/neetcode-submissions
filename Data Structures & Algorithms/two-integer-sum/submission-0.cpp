class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        unordered_map<int,int>m;

        for(int i=0;i<nums.size();i++){
            int difference=target-nums[i];
            if(m.find(difference)==m.end()) m[nums[i]]=i;
            else {
                v.push_back(m[difference]);
                v.push_back(i);
            }
        }
        
        return v;
    }
};
