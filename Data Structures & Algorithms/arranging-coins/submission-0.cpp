class Solution {
public:
    int arrangeCoins(int n) {
        int i=0;
        while(n-i>0){
            i++;
            n-=i;
        }
        return i;
    }
};