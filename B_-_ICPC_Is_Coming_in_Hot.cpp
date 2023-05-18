#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    string s;
    cin>>s;

    map <char, int> mp;
    for (int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }

    ll mx = 0, ans;
    for (auto x:mp){
        if (x.second > mx){
            mx = x.second;
            ans = x.first-'0';
        }
    }

    cout<<ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;

    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
} 
  
