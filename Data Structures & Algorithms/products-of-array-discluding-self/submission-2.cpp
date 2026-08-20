class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int zeroCount=0;
        for(int n:nums){
            if(n!=0){
                product*=n;
            }else{
                zeroCount++;
            }
        }

        if(zeroCount>1){
            return vector<int>(nums.size(),0);
        }

        vector<int>res(nums.size(),0);

        for(int i=0;i<nums.size();i++){
           if(zeroCount>0){
            res[i]=(nums[i]==0)?product:0;
            
           }else{
            res[i]=product/nums[i];
           }
        }

        return res;

    }
};
