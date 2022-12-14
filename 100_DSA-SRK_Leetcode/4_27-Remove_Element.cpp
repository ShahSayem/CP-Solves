#include <bits/stdc++.h>
using namespace std;

int solve(vector <int> & nums, int val){
    int i = 0;
    for (int j = 0; j < nums.size(); j++){
        if (nums[j] == val){
            i++;
            nums.erase(nums.begin()+j);
            j--;
        }
    }

    return nums.size();
}

int main()
{
    vector <int> nums;
    int val, x;
    
    cin>>val;
    int i = 0;
    while (cin>>x){
        nums.push_back(x);
        i++;
    }

    cout<<solve(nums, val)<<endl;
    for (int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    
    return 0;
}