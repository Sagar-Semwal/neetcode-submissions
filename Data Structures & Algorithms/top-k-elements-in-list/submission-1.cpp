class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>s;
        vector<pair<int,int>>v;
        unordered_map<int,int>mp;

        for(auto n:nums){
            mp[n]++;

        }

        for(auto ele:mp){
            v.push_back({ele.second,ele.first});
        }

        sort(v.rbegin(),v.rend());

        for(int i=0;i<k;i++){
            s.push_back(v[i].second);
        }

        return s;
        
    }
};
