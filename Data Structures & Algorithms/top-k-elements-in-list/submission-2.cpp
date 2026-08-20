class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        vector<vector<int>>v(nums.size()+1);

        for(auto n:nums){
            mp[n]++;
        }

        for(auto ele:mp){
            v[ele.second].push_back(ele.first);
        }

        vector<int>res;

        for(int i=v.size()-1;i>0;i--){
           for(int n:v[i]){
            res.push_back(n);
            if(res.size()==k){
                return res;
            }
            

           }
        }

        return res;
    }
};
