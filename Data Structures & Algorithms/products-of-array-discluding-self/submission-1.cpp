class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>suffix(n,1);
        vector<int>prefix(n,1);
       
        int product=1;

        for(int i=1;i<n;i++){
            product*=nums[i-1];
            prefix[i]=product;


        }
 
        product=1;

        for(int i=n-2;i>=0;i--){
            product*=nums[i+1];
            suffix[i]=product;

        }

        vector<int>res(n,1);
        for(int i=0;i<n;i++){
            res[i]=prefix[i]*suffix[i];
        }

        return res;


    }
};
