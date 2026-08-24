class Solution {
public:
    int trap(vector<int>& height) {

        int left=0;
        int right=height.size()-1;

        int leftMax=height[left];
        int rightMax=height[right];
        int water=0;

        while(left<right){
            if(height[left]<height[right]){
                //process left
                if(leftMax>height[left]) water+=leftMax-height[left];
                else leftMax=height[left];

                left++;


            }
            else{
                //process right
                if(rightMax>height[right]) water+=rightMax-height[right];
                else rightMax=height[right];

                right--;
            }
        }

       return water;
        
    }
};
