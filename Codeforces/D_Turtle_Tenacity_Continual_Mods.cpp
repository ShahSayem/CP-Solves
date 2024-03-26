#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    cin>>n;

    int x, mn = 1e9;
    vector <int> v(n);
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin>>v[i];
        
        mp[v[i]]++;
        mn = min(mn, v[i]);
    }

    if(mp[mn] == 1){
        cout<<"YES";
    }    
    else {
        for (int i = 0; i < n; i++){
            if (v[i]%mn){
                cout<<"YES";
                return;
            }
        }

        cout<<"NO";
    }
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
