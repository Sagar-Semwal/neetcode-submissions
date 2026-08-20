class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;

        for(int n:nums){
            mp[n]++;
        }
        
int maxCount=0;
        for(int i=0;i<n;i++){
            int count=1;
            int element=nums[i];
            if(mp.find(element-1)==mp.end()){
                for(int j=1;j<n;j++){
                    if(mp.find(element+j)!=mp.end()) count++;
                    else break;
                }


            }
            maxCount=max(count,maxCount);
        }

        return maxCount;
        
    }
};
