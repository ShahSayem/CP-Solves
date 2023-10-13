#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 100+5;

int dp[MAX];
vector <int> v;

ll mxMoney(int idx)
{
    if (idx == 0){
        return v[0];
    }

    if (idx < 0){
        return 0;
    }

    if (dp[idx] != -1){
        return dp[idx];
    }

    ll pick = mxMoney(idx-2) + v[idx];
    ll notPick = mxMoney(idx-1);

    return dp[idx] = max(pick, notPick);
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    v.resize(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    cout<<mxMoney(n-1);
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
