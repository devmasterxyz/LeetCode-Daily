class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> v;
        int i=1;
        int sz = intervals.size();
        if(sz==0) {
            v.push_back(newInterval);
            return v;
        }
        vector<int> temp = intervals[0];
        v.push_back(temp);
        bool f=0;
        while(i<sz) {
            if(v[v.size()-1][0]>newInterval[1] && !f) {
                vector<int> x = v[v.size()-1];
                v[v.size()-1]=newInterval;
                v.push_back(x);
                f=1;
            }
            else if(v[v.size()-1][1]>=newInterval[0] && !f) {
                v[v.size()-1][0]=min(v[v.size()-1][0],newInterval[0]);
                v[v.size()-1][1]=max(v[v.size()-1][1],newInterval[1]);
                f=1;
            }
            else if(v[v.size()-1][1]>=intervals[i][0]) {
                v[v.size()-1][0]=min(v[v.size()-1][0],intervals[i][0]);
                v[v.size()-1][1]=max(v[v.size()-1][1],intervals[i][1]);
                i++;
            }
            else {
                v.push_back(intervals[i]);
                    i++;
            }
            
        }
        if(!f) {
            if(v[v.size()-1][0]>newInterval[1]) {
                vector<int> x = v[v.size()-1];
                v[v.size()-1]=newInterval;
                v.push_back(x);
            }
           else if(v[v.size()-1][1]>=newInterval[0] ) {
                v[v.size()-1][0]=min(v[v.size()-1][0],newInterval[0]);
                v[v.size()-1][1]=max(v[v.size()-1][1],newInterval[1]);
            }
            else {
                v.push_back(newInterval);
            }
        }
        return v;
    }
};