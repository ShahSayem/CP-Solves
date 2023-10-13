#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 100+5;

int dp[MAX];

ll mxMoney(int idx, vector <int> &v)
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

    ll pick = mxMoney(idx-2, v) + v[idx];
    ll notPick = mxMoney(idx-1, v);

    return dp[idx] = max(pick, notPick);
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    vector <int> v(n), temp1, temp2;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (i)
            temp1.push_back(v[i]);
        if (i != n-1)
            temp2.push_back(v[i]);
    }

    if (n == 1){
        cout<<v[0];

        return;
    }

    ll ans1 = mxMoney(n-2, temp1);
    memset(dp, -1, sizeof(dp));
    ll ans2 = mxMoney(n-2, temp2);

    cout<<max(ans1, ans2);
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
