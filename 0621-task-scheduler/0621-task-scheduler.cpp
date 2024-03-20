class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> v(26,0);
        for(auto it:tasks) {
            v[it-'A']++;
        }
        sort(v.begin(),v.end());
        int space = (v[25]-1)*n;
        for(int i=0;i<25;i++) {
            space-=min(v[i],(v[25]-1));
        }
        return (space<0)?tasks.size():tasks.size()+space;
    }
};