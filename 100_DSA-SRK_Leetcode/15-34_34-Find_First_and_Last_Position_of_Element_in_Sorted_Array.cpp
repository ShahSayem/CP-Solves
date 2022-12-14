#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector <int> & nums, int target){

    vector <int> ans;
    
    int f = lower_bound(nums.begin(), nums.end(), target)-nums.begin();
    int l = upper_bound(nums.begin(), nums.end(), target)-nums.begin()-1;

    bool check = binary_search(nums.begin(), nums.end(), target);

    if (!check){
        ans.push_back(-1);
        ans.push_back(-1);
    }
    else{
        ans.push_back(f);
        ans.push_back(l);
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
        cout<<x<<" ";
    }
    
    return 0;
}