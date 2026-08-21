class Solution {
   public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;

        for (auto letter : s) {
            mp[letter]++;
        }

        for (int i = 0; i < t.length(); i++) {
            char element = t[i];

            if (mp.find(element) == mp.end()) return false;

            if (mp.find(element) != mp.end()) {
                mp[element]--;
            }
        }

        for (auto & ele : mp) {
            if (ele.second != 0) return false;
        }

        return true;
    }
};
