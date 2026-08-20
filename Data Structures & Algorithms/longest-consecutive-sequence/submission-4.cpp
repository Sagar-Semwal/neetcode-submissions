class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(nums.empty()) return 0;

        sort(nums.begin(),nums.end());

int maxCount=1;
int count=1;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]==nums[i]+1){
                count++;
            }
            else if(nums[i+1]==nums[i]){
                continue;
            }

            else{
                count=1;
            }

            maxCount=max(count,maxCount);
          

           

        }



return maxCount;


        
    }
};
