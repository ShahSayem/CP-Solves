#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e4+5;

void solve()
{
    int n, q;
    cin>>n>>q;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
        v[i]--;
    }
    
    int op, idx, pos, a, b;
    while (q--){
        cin>>op;

        if (op == 1){
            cin>>idx>>pos;
            idx--, pos--;
            v[idx] = pos;
        }
        else {
            cin>>a>>b;
            a--, b--;

            cout<<abs(v[a]-v[b])<<"\n";
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
        //cout<<"\n";
    }

    return 0;
}
