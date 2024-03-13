class Solution {
public:
    int pivotInteger(int n) {
        int x=1;
        for(int i=1;i<=n;i++) {
            if((i*(i+1))/2 == ((n-i+1)*(i+n))/2) {
                return i;
            }
        }
        return -1;
    }
};