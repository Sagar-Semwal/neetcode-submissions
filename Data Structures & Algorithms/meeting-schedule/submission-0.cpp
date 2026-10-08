/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:

static bool cmp(const Interval&a,const Interval&b){
    return a.start<b.start;
}
    bool canAttendMeetings(vector<Interval>& intervals) {
        int n=intervals.size();
        if(n==0 || n==1) return true;

        sort(intervals.begin(),intervals.end(),cmp);

        auto prev=intervals[0];

       for(int i=1;i<intervals.size();i++){
        if(intervals[i].start<prev.end) return false;
        prev=intervals[i];
       }

       return true;
        
    }
};
