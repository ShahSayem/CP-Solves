#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MOD = 1e9+7;
const int MAX = 1e7+5;

int dp[305][5005];
int coins[305];

int totalWays(int idx, int amount)
{
    if (idx == 0){
            if (amount%coins[idx] == 0)
                return 1;

            return 0;
        }

    if (dp[idx][amount] != -1){
        return dp[idx][amount];
    }

    int pick = 0, notPick;

    if (coins[idx] <= amount)
        pick = totalWays(idx, amount-coins[idx]);
        
    notPick = totalWays(idx-1, amount);

    return dp[idx][amount] = pick + notPick;
}

void solve()
{
    int n, k;
    cin>>n>>k;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++){
        cin>>coins[i];
    }
 
    int ans = totalWays(n-1, k); 

    if (ans == -1){
        cout<<0;
    }
    else {
        cout<<ans;
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
