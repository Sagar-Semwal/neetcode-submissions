class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;

        if(s.length() != t.length()) return false;

        for(char c : s) {
            mp[c]++;
        }

        for(char c : t) {
            if(mp.find(c) != mp.end()) {
                mp[c]--;
            } 
            else {
                return false;
            }
        }

        for(auto ele : mp) {
            if(ele.second != 0) return false;
        }

        return true;
    }
};