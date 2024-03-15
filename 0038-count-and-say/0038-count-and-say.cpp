class Solution {
public:
    string countAndSay(int n) {
        string target="1";
        if(n==1) return target;
        for(int i=2;i<=n;i++) {
            int curr=1;
            string s="";
           for(int i=1;i<target.length();i++) {
               if(target[i]!=target[i-1]) {
                   s+=to_string(curr);
                   s+=target[i-1];
                   curr=1;
               }
               else {
                   curr++;
               }
               
           }
            if(curr>0) {
                 s+=to_string(curr);
                 s+=target[target.length()-1];
            }
            target=s;
        }
        return target;
    }
};