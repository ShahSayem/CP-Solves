#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e7+7;
const int MAX = 1e4+5;

int dp[MAX];
int a, b, c, d, e, f, n;

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

int fibo6(int n)
{
    if (n == 0) 
        return dp[n] = a%MOD;
    if (n == 1) 
        return dp[n] = b%MOD;
    if (n == 2) 
        return dp[n] = c%MOD;
    if (n == 3) 
        return dp[n] = d%MOD;
    if (n == 4) 
        return dp[n] = e%MOD;
    if (n == 5) 
        return dp[n] = f%MOD;
        
    if (dp[n] == -1)
        return dp[n] = ((fibo6(n-1)%MOD) + (fibo6(n-2)%MOD) + (fibo6(n-3)%MOD) + (fibo6(n-4)%MOD) + (fibo6(n-5)%MOD) + (fibo6(n-6)%MOD))%MOD;
    
    return dp[n];
}

void solve2()
{
    memset(dp, -1, sizeof(dp));
    cin>>a>>b>>c>>d>>e>>f>>n;
    
    cout<<fibo6(n) % MOD;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";
        solve2();
        cout<<"\n";
    }

    return 0;
}
