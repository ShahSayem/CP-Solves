#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, x, y;
    cin>>n;

    ll cnt = 0;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin>>x>>y;

        mp[x]++;
    }
    
    vector <int> v;
    for (auto &&i : mp){
        v.push_back(i.second);
    }
    
    for (int i = 1; i < v.size(); i++){
        cnt += (v[i]+v[i-1]-1);
    }
    
    cout<<cnt;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
