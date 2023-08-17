#include <bits/stdc++.h>
using namespace std;

vector <vector<int>>  solve(vector <int> & nums, int target){

    sort(nums.begin(), nums.end());

    vector <vector <int>> ans;
    if (nums.size() < 4)
        return ans;

    int n = nums.size();
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            long long target_2 = target - (long long)nums[j] - (long long)nums[i];
            int left = j+1, right = n-1;

            while (left<right){
                long long two_sum = nums[left]+nums[right];

                if (two_sum < target_2)
                    left++;
                else if (two_sum > target_2)
                    right--;

                else {
                    vector <int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    ans.push_back(temp);
            
                    while (left<right && nums[left] == temp[2])
                        left++;
                    while (left<right && nums[right] == temp[3])
                        right--;
                }
            }
            while (j+1 < n && nums[j+1] == nums[j])
                j++; 
        }
        while (i+1 < n && nums[i+1] == nums[i])
            i++;
    }

    return ans;
}

int main()
{
    vector <int> nums;
    int x, target;

    cin>>target;
    while (cin>>x) {
        nums.push_back(x);
    }

    auto ans = solve(nums, target);

    for (auto x:ans){
        for (auto y:x){
            cout<<y<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}