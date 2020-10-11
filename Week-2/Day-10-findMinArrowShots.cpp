bool comparator(const vector<int>& V1, const vector<int>& V2){
        return V1[1]<V2[1];
    }

class Solution {
public:
    
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.empty())
            return 0;
        sort(points.begin(), points.end(), comparator);
        int lastcom, arrow=1;
        lastcom = points[0][1];
        for(int i=1; i<points.size(); i++){
            if(points[i][0]>lastcom) {
                arrow++;
                lastcom = points[i][1];
            }
        }
        return arrow;
    }
};
