#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e7+7;
const int MAX = 1e4+5;

int dp[MAX];

void solve()
{
    memset(dp, 0, sizeof(dp));
    int a, b, c, d, e, f, n;
    cin>>a>>b>>c>>d>>e>>f>>n;

    dp[0] = a, dp[1] = b, dp[2] = c, dp[3] = d, dp[4] = e, dp[5] = f;

    for (int i = 6; i <= n; i++){
        for (int j = 1; j <= 6; j++){
            dp[i] = ((dp[i]%MOD) + (dp[i-j]%MOD)) % MOD;
        }
    }
    
    cout<<dp[n] % MOD;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
