class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size() == 1)
            return 0;
        
        if (nums[nums.size()-1] > nums[nums.size()-2])
            return nums.size()-1;
        
        if (nums[0] > nums[1])
            return 0;
        
        int left = 0, right = nums.size()-1, mid;
        mid = left + (right-left)/2;
        while (left <= right){
            if (nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1])
                return mid;
            
            if (nums[mid-1] > nums[mid])
                mid = mid-1;
                    
            else 
                mid = mid+1;
        }
        
        return -1;
    }
};