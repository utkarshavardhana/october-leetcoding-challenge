class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        if(intervals.empty())   return 0;
        int count = 1;
        vector<int> last = intervals[0];
        for(int i=1; i<intervals.size(); i++) {
            if(intervals[i][0] >= last[0] and intervals[i][1] <= last[1]) {
                continue;
            } else if(intervals[i][0] <= last[0] and intervals[i][1] >= last[1]){
                last = intervals[i];
            } else {
                last = intervals[i];
                count++;
            }
        }
        return count;
    }
};
