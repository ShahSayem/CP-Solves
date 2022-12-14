class Solution {
public:
    int search(vector<int>& nums, int target) {
        int x = lower_bound(nums.begin(), nums.end(), target)-nums.begin();
        
        if (x >= nums.size())
            return -1;
        else if (nums[x] == target)
            return x;
        else 
            return -1;
    }
};