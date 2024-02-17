mt19937 rd(0);

class Solution {
public:
    int createPartition(vector <int> &nums, int l, int r)
    {
        int piVot = nums[r];
        int i = l-1;
        for (int j = l; j < r; j++){
            if (nums[j] <= piVot){
                i++;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i+1], nums[r]);

        return i+1;
    }
    
    void partialSort(vector <int> &nums, int k)
    {
        int l = 0, r = nums.size()-1;
        
        while (l < r){
            int p = createPartition(nums, l, r);
            
            if (p > k)
                r = p-1;
            else if (p < k)
                l = p+1;
            else 
                break;
        }
    }
    
    int findKthLargest(vector<int>& nums, int k) 
    {
        shuffle(nums.begin(), nums.end(), rd);
        partialSort(nums, nums.size()-k);
        
        return nums[nums.size()-k];
    }
};