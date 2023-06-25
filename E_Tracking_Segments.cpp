#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

struct two
{
    int f, s;
};

void solve()
{
    int n, m, l, r;
    cin>>n>>m;

    vector <int> v(n+1);
    for (int i = 0; i <= n; i++){
        v[i] = 0;
    }

    map <two, two> mp;
    map <two, int> hashGen;
    
    while (m--){
        cin>>l>>r;
        mp[{l, r}] = {r-l+1, 0};    //cnt0, cnt1
    }

    int q, x;
    cin>>q;
    while (q--){
        cin>>x;
        v[x] = 1;
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
