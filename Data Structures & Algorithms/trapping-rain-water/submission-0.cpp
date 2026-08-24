class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();

        vector<int>prev(n,-1);
        vector<int>next(n,-1);

        int prevGreatest=height[0];
        for(int i=1;i<n;i++){
            prev[i]=prevGreatest;
            if(height[i]>prevGreatest) prevGreatest=height[i];

        }

        int nextGreatest=height[n-1];

        for(int i=n-2;i>=0;i--){
            next[i]=nextGreatest;
            if(height[i]>nextGreatest) nextGreatest=height[i];
        }

int water=0;
        for(int i=1;i<n-1;i++){
            
            int minimum=min(prev[i],next[i]);
            if(minimum>height[i]) water+=minimum-height[i];
        }
      
            





return water;
    

        
    }
};
