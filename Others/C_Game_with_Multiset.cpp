#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int q, op;
    cin>>q;

    ll curr, cnt, val;
    vector <int> mp(30);
    while (q--){ 
        cin>>op>>val;

        if (op == 1){
            mp[val]++;
        }
        else {
            for (ll i = 29; i >= 0; i--){
                if (mp[i]){
                    curr = (1LL << i);
                    cnt = min(val/curr, ll(mp[i]));

                    val -= (curr*cnt);
                }   

                if (val == 0){
                    cout<<"YES\n";
                    break;
                } 
            }

            if (val){
                cout<<"NO\n";
            }
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

    //cout<<(1<<0);
    return 0;
}
