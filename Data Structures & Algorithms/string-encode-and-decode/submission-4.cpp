class Solution {
   public:
    string enc = "";
    string encode(vector<string>& strs) {
        for (int i = 0; i < strs.size(); i++) {
            enc += strs[i];
            enc += "`";
        }
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string word;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '`') {
                ans.push_back(word);
                word = "";
            } else {
                word += s[i];
            }
        }
        return ans;
    }
};
