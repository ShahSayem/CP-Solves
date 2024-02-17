#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e4+5;

void solve()
{
    int n, k, mn = INT_MAX;
    cin>>n>>k;

    string s;
    cin>>s;

    map <char, int> mp;
    for (int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    
    for (int i = 0; i < n; i++){
        mn = min(mp[s[i]], mn);
    }

    if (mp.size() == k)
        cout<<mp.size()*mn;
    else    
        cout<<0;
}

int main()
{
    Shah_Sayem

    int tc = 1;
   // cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
