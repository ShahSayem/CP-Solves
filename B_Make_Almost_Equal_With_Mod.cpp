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

    vector <ll> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    ll k;
    for (ll i = 0; i < 60; i++){
        k = (1LL << i);

        set <ll> rem;
        for (auto it : v){
            if (rem.size() > 2)
                break;
            
            rem.insert(it%k);
        }
        
        if (rem.size() == 2){
            cout<<k;
            
            break;
        }
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
