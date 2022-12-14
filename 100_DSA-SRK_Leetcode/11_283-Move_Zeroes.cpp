#include <bits/stdc++.h>
using namespace std;

vector <int> solve(vector <int> & nums){

    int j = 0;
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }

    return nums;  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector <int> nums;
    int x;
    while (cin>>x){
        nums.push_back(x);
    }

    vector <int> ans = solve(nums);

    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }   

    return 0;
}