#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        vector <int> preSum(n+1, 0);
        for(int i = 1; i <= n; i++){
            preSum[i] = preSum[i-1] + i;
        }

        for(int i = 1; i <= n; i++){
            if (preSum[i] == preSum[n]-preSum[i-1]){
                return i;
            }
        }

        return -1;
    }
};