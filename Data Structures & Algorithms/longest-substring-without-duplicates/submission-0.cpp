class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n=s.size();
        unordered_set<char>st;
    int lo=0;
    int hi=0;
    int count=0;

    while(hi<n){
        while(st.find(s[hi])!=st.end()){
            st.erase(s[lo]);
            lo++;


        }
        st.insert(s[hi]);
        hi++;
        count=max(count,hi-lo);
        
        
    }
return count;
    
        
    }
};
