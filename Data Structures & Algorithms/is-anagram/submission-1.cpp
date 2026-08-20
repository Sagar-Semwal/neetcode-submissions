class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;

        for(auto ele:s){
            m1[ele]++;

        }

         for(auto ele:t){
            m2[ele]++;

        }

        for(int i=0;i<s.size();i++){
            int ch=s[i];
            if(m1[ch]!=m2[ch]) return false;

        }

        return true;

        
    }
};
