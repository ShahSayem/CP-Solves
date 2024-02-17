#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int q, l, r;
    cin>>q;

    char op;
    multiset <int> start, endd;
    while (q--){
        cin>>op;
        cin>>l>>r;

        if (op == '+'){
            start.insert(l);
            endd.insert(r);
        }
        else {
            start.erase(start.find(l));
            endd.erase(endd.find(r));
        }

        r = *endd.begin();
        auto it = start.upper_bound(r); 

        if (it != start.end()){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
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
