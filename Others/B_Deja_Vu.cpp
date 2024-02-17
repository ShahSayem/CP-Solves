#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, q;
    cin>>n>>q;

    vector <ll> v(n), x;
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
     
    int sz, curr;
    for (int i = 0; i < q; i++){
        cin>>curr;

        sz = x.size();
        if (sz == 0 || x[sz-1] > curr){
            x.push_back(curr);
        }
    }

    sz = x.size();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < sz; j++){
            if (v[i] % (1 << x[j]) == 0){
                v[i] += (1 << (x[j]-1));
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout<<v[i]<<" ";
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
