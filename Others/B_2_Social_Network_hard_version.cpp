#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, k;
    cin>>n>>k;

    vector <int> v(n), ans;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (ans.size() < k){
            if (!mp[v[i]]){
                mp[v[i]]++;
                ans.push_back(v[i]);
            }    
        }
        else {
            if (!mp[v[i]]){
                mp[ans[cnt]] = 0;
                mp[v[i]]++;
                cnt++;
                // cout<<i<<" ";
                ans.push_back(v[i]);
            }
        }
    }

    int sz = ans.size();
    //cout<<sz<<" "<<cnt;
    cout<<sz-cnt<<"\n";
    for (int i = sz-1; i >= cnt; i--){
        cout<<ans[i]<<" ";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
