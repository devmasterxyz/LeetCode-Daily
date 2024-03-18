class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int res=1,ind = points[points.size()-1][0];
        for(int i=points.size()-2;i>=0;i--) {
            if(ind>=points[i][0] && ind<=points[i][1]) {
                continue;
            }
            else {
                res++;
                ind = points[i][0];
            }
        }
        // for(int i=0;i<points)
        return res;
    }
};