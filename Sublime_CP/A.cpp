#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1000000+5;
ll dp[MAX];


int main()
{
    Shah_Sayem

    memset(dp, -1, sizeof(dp));

    int n;
    cin>>n;

    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++){
        dp[i] = (dp[i-1]%MOD + dp[i-2]%MOD) % MOD;
    }
    cout<<dp[n]<<"\n";

    return 0;
}
