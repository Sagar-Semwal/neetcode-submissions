class Solution {
public:

int helper(vector<int>&nums,int idx,vector<int>&dp){

    //Recurrence mean -> 0 to idx What is the max profit i can gain

    if(idx==0)  return nums[0];
    if(idx==1) return max(nums[0],nums[1]);
    if(dp[idx]!=-1) return dp[idx];


    return dp[idx]=max(nums[idx]+helper(nums,idx-2,dp),helper(nums,idx-1,dp));

}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);

        return helper(nums,nums.size()-1,dp);
        
    }
};
