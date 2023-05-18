#include <bits/stdc++.h>
using namespace std;

vector <int> solve(vector<int>& nums1, vector<int>& nums2){

    vector <int> v;
    map <int, int> mp;

    for (int i = 0; i < nums1.size(); i++){
        mp[nums1[i]]++;
    }

    for (int i = 0; i < nums2.size(); i++){
        if (mp[nums2[i]] > 0){
            mp[nums2[i]]--;
            v.push_back(nums2[i]);
        }
    }

    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector <int> num1, num2;
    int x;
    while (cin>>x){
        if (x == 999)
            break;
        num1.push_back(x);
    }

    while (cin>>x){
        num2.push_back(x);
    }

    vector <int> ans = solve(num1, num2);

    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}