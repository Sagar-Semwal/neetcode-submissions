class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n= heights.size();
        int i=0;
        int j=n-1;
        int mx=0;

        while(i<j){
            int len=min(heights[i],heights[j]);
            int breadth=j-i;

            int water=len*breadth;
            mx=max(mx,water);

            if(heights[i]<heights[j]) i++;
            else j--;



        }

        return mx;



        

    }
};
