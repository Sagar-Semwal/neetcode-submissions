class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
        vector<int>s;
        unordered_map<int,int>mp;
        for(auto n:nums){
            mp[n]++;
        }

        for(auto ele:mp){
            v.push_back(ele);

        }

 sort(v.begin(), v.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
    return a.second > b.second;
});

        for(int i=0;i<k;i++){
            s.push_back(v[i].first);

        }

        return s;
        
    }
};
