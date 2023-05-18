#include <bits/stdc++.h>
using namespace std;

bool solve(vector <int> & nums){

    map <int, int> mp;
    for (int i = 0; i < nums.size(); i++){
        mp[nums[i]]++;

        if (mp[nums[i]] > 1)
            return true;
    }

    return false;
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

    bool ans = solve(nums);

    if (ans)
        cout<<"true";
    else
        cout<<"false";

    return 0;
}