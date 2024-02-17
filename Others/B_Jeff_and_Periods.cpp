#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e5+5;

int cnt[MAX];

void solve()
{
    int n, x, idx;
    cin>>n;

    vector <int> v(n);
    map <int, pair <int, int> > mp;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        cnt[v[i]]++;
        x = (i+1) - mp[v[i]].first;
        if (cnt[v[i]] > 2){
            if (mp[v[i]].second != x)
                mp[v[i]].second = -1;
        }  
        else if (cnt[v[i]] == 2){
            mp[v[i]].second = x;
        }
        
        mp[v[i]].first = i+1;
    }
    
    int sz = 0;
    for(auto it: mp){
        if (it.second.second != -1)
            sz++;
    }

    cout<<sz<<"\n";
    for(auto it: mp){
        if (it.second.second != -1){
            cout<<it.first<<" ";

            x = it.first;
            if (cnt[x] == 1)
                cout<<0<<"\n";
            else        
                cout<<it.second.second<<"\n";
        }
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
