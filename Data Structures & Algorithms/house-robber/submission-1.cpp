class Solution {
public:

int helper(vector<int>&nums,int idx,vector<int>&dp){

    //Recurrence mean -> idx to n-1 What is the max profit i can gain

    if(idx==nums.size()-1)  return nums[nums.size()-1];
    if(idx==nums.size()-2) return max(nums[nums.size()-2],nums[nums.size()-1]);
    if(dp[idx]!=-1) return dp[idx];


    return dp[idx]=max(nums[idx]+helper(nums,idx+2,dp),helper(nums,idx+1,dp));

}
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);

        return helper(nums,0,dp);
        
    }
};
