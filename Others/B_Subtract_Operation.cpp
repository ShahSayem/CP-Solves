#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    int n, k;
    cin>>n>>k;

    vector <int> v(n);
    map <int, bool> mp;
    for (int i = 0; i < n; i++){
        cin>>v[i];
        mp[v[i]] = 1;

    }

    for (int i = 0; i < n; i++){
        if(mp[v[i]+k]){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
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
