class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(auto s:strs){
            ans+=s;
            ans+='`';
        }

        return ans;

    }

    vector<string> decode(string s) {
        vector<string>v;
        string word="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='`'){
                v.push_back(word);
                word="";

            }
            else word+=s[i];
        }
return v;
    }
};
