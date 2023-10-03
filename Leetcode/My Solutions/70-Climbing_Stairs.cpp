#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 45+5;

int dp[MAX];

int noOfWays(int n)
{
    if (n <= 1)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    int left = noOfWays(n-1);
    int right = noOfWays(n-2);

    return dp[n] = left+right;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;

    cout<<noOfWays(n);
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
