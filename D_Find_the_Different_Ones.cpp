#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;


void solve()
{
    int n, q, l, r;
    cin>>n;
    vector <int> v(n), idx(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (!i)
            idx[i] = i;
        else if (v[i] != v[i-1])
            idx[i] = i;
        else 
            idx[i] = idx[i-1];
    }
    
    cin>>q;
    while (q--){
        cin>>l>>r;

        if (idx[r-1] < l)
            cout<<-1<<" "<<-1;
        else 
            cout<<idx[r-1]<<" "<<r;

        cout<<"\n";
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
