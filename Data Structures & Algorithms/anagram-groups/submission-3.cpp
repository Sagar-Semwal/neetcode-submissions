class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>s;
        vector<string>str=strs;

        for(auto &s:str){
            sort(s.begin(),s.end());
        
        }

        for(int i=0;i<strs.size();i++){
            string sortedString=str[i];
            string realString=strs[i];

            mp[sortedString].push_back(realString);


        }

        for(auto ele:mp){
            s.push_back(ele.second);
        }

        return s;


        
    }
};
