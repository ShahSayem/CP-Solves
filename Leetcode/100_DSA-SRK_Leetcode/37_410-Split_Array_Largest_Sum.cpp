class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int left = 0, right = 0, n = nums.size();
        
        for (int i = 0; i < n; i++)
            left = max(left, nums[i]), right += nums[i];
        
        int mid, ans;
        while (left <= right){
            mid = left + (right - left) / 2;
            int cnt = 0, sum = 0;
            
            for (int i = 0; i < n; i++){
                if (sum+nums[i] <= mid)
                    sum += nums[i];
                else
                    cnt++, sum = nums[i];
            }
            
            cnt++;
            
            if (cnt <= m)
                right = mid-1, ans = mid;
            else
                left = mid+1;
        }
        
        return ans;
    }
};