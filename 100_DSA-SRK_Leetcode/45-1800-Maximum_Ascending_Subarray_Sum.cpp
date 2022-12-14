#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = 0, temp = nums[0];
        for (int i = 1; i < nums.size(); i++){
            if (nums[i-1] < nums[i]){
                temp += nums[i];
            }
            else {
                sum = max(sum, temp);
                temp = nums[i];
            }
        }
        sum = max(sum, temp);
        
        return sum;
    }
};