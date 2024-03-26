#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
bool mp[1005];

int main()
{   
    int n, m;
    cin>>n>>m;

    vector <int> nums1(n), nums2(m), ans;
    for (auto &&i : nums1){
        cin>>i;

        mp[i] = 1;
    }
    for (auto &&i : nums2){
        cin>>i;

        if (mp[i]){
            mp[i] = 0;
            ans.push_back(i);
        }    
    }
    
    for (auto &&i : ans){
        cout<<i<<" ";
    }

    sort(ans.rbegin(), ans.rend());
    
    return 0;
}