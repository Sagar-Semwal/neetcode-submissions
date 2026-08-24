class Solution {
   public:
    bool isPalindrome(string s) {
        string word = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') continue;

            if (isalnum(s[i])) {
                word+=tolower(s[i]);
            }
        }
       
        int i = 0;
        int j = word.size() - 1;

        while (i <= j) {
            if(word[i]==word[j]){
                i++;
                j--;
            }
            else return false;
    
        }

        return true;
    }
};
