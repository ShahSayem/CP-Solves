class Solution {
public:
    int arrangeCoins(int n) {
        int cnt = 0, i = 1;
        while (n > 0){
            n -= i;
            if (n > -1)
                cnt++;
            
            i++;
        }
        
        return cnt;
    }
};