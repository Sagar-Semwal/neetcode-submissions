class Solution {
public:
static bool cmp(const vector<int>&a,const vector<int>&b){
    return a[0]<b[0];
}
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;

        sort(intervals.begin(),intervals.end(),cmp);


        vector<int>prev=intervals[0];

        for(auto interval:intervals){
            if(prev[1]>=interval[0]){
                prev[1]=max(prev[1],interval[1]);

            }else{
                ans.push_back(prev);
                prev=interval;
            }
        }
        ans.push_back(prev);

        return ans;
        
    }
};
