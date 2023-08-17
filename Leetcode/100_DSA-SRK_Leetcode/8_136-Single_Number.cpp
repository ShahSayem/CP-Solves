#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums){

    map <int, int> mp;

    for (int i = 0; i < nums.size(); i++){
        mp[nums[i]]++;
    }

    int ans;
    for (int i = 0; i < nums.size(); i++){
        if (mp[nums[i]] == 1){
            ans = nums[i];
            break;
        }
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector <int> num;
    int x;
    while (cin>>x){
        num.push_back(x);
    }

    cout<<solve(num)<<"\n";
    
    return 0;
}