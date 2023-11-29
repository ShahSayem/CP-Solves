#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
int n, amount, dp[13][10005];
vector <int> coins(13);

int mnCoin(int idx, int amount)
{
    if (idx == 0){
        if (amount%coins[idx] == 0)
            return (amount/coins[idx]);

        return 1e8+5;
    }

    if (dp[idx][amount] != 1e8){
        return dp[idx][amount];
    }

    int pick = 1e8+5, notPick;

    if (coins[idx] <= amount)
        pick = 1 + mnCoin(idx, amount-coins[idx]);
        
    notPick = mnCoin(idx-1, amount);

    return dp[idx][amount] = min(pick, notPick);
}

void solve()
{
    cin>>n>>amount;
    for (int i = 0; i < 13; i++){
        for (int j = 0; j < 10005; j++){
            dp[i][j] = 1e8;
        }
    }
    
    for (int i = 0; i < n; i++){
        cin>>coins[i];
    }
    sort(coins.rbegin(), coins.rend());

    int ans = mnCoin(n-1, amount);

    if (ans == 1e8+5)
        ans = -1;

    cout<<ans;
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
