class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>s;
        unordered_map<string,vector<string>>mp;


        for(int i=0;i<strs.size();i++){

            vector<int>freq(26,0);



            for(int j=0;j<strs[i].size();j++){

                int index=strs[i][j]-'a';
                freq[index]++;

            }

        string key=to_string(freq[0]);
        for(int i=1;i<26;i++){
            key+=','+to_string(freq[i]);
        }

        mp[key].push_back(strs[i]);
        }

        for(auto el:mp){
            s.push_back(el.second);
        }

        return s;
        
    }
};
