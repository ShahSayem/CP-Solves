#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e6+5;

ll dp[MAX];
vector <int> coins;
int n, x;

ll minCoin(ll sum)
{
    if (sum == 0){
        return 0;
    }

    if (sum < 0){
        return -1;
    }
    
    if (dp[sum] != 1e18){
        return dp[sum];
    }

    ll cnt = 1e18, curr;
    for (size_t i = 0; i < n; i++){
        curr = minCoin(sum-coins[i]);

        if (curr != -1){
            cnt = min(cnt,  curr+1);
        }
    }

    if (cnt == 1e18)
        cnt = -1;

    return dp[sum] = cnt; 
}

void solve()
{
    cin>>n>>x;

   // memset(dp, -1, sizeof(dp));
    for (int i = 0; i < MAX; i++){
        dp[i] = 1e18;
    }
   
    coins.resize(n);
    for (size_t i = 0; i < n; i++){
        cin>>coins[i];
    }
    sort(coins.rbegin(), coins.rend());

    cout<<minCoin(x);
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
