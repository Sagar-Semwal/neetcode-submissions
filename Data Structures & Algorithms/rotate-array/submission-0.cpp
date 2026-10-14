class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        int count=0;

        for(int start=0;count<n;start++){
            int i=start;
            int prev=nums[i];

            while(true){

                
                int next=(i+k)%n;
                if(start==next){
                  nums[next]=prev;
                    count++;
                    break;
                }

                int current=nums[next];
                nums[next]=prev;
                prev=current;
                i=next;
                count++;

            }

        }
        
    }
};