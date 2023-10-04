class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        int ct=0;
        while(n>ct){
            n=n-i;
            i++;
            ct++;
        }
        return ct;
    }
    
};