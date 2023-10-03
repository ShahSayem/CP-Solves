#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    int n, m;
    cin>>n>>m;
    
    vector <int> v(m);
    map <int, int> mp;
    for (int i = 0; i < m; i++){
        cin>>v[i];
        mp[v[i]]++;
    }

    int j, start = 1;
    for (int i = 0; i < m; i++){
        for (j = start; j < v[i]; j++){
            if(!mp[j]){
                mp[j]++;
                cout<<j<<"\n";
            }
        }
        start = j;
        cout<<v[i]<<"\n";
    }

    for (int i = 1; i <= n; i++){
        if (!mp[i])
            cout<<i<<"\n";
    } 
}

int main()
{
    //Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
