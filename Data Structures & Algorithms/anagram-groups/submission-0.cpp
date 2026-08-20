class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        unordered_map<string,vector<string>>mp;
        // sort(strs.begin(),strs.end());

        vector<string>st=strs;

        for(auto &s:st){
            sort(s.begin(),s.end());
        }

        for(int i=0;i<st.size();i++){
            string Sortedelement=st[i];
            string realelement=strs[i];
                mp[Sortedelement].push_back(realelement);
          
        }

        for(auto ele:mp){
            v.push_back(ele.second);
        }

        return v;



        

     
        
    }
};
