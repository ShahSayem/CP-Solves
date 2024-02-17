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

    ll xorAll = 0, curr;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        xorAll ^= v[i];
    }
    
    for (int i = 0; i < n; i++){
        curr = xorAll ^ v[i];

        cout<<curr<<" ";
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
