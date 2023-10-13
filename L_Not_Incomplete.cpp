#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll x, y, z, n, leftWeek;
    cin>>x>>y>>z>>n;

    ll totalNeedClass = ceill(x*y*0.6);
    ll left = totalNeedClass-n, curr;

    if (left <= 0){
        left = 0;
    }

    leftWeek = x-z;
    if (leftWeek*y < left){
        cout<<"No";
        return;
    }

    vector <ll> ans;
    for (int i = 0; i < leftWeek; i++){
        curr = min(y, left);
        left -= curr;
        
        ans.push_back(curr);
    }

    int sz = ans.size();
    cout<<"Yes\n";
    for (int i = sz-1; i >= 0; i--){
        cout<<ans[i]<<" ";
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
