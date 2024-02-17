#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e6+5;

ll dp[MAX];
vector <int> coins;

ll minNoOfCoin(int x)
{
    if (x == 0)
        return 0;

    if (x < 0)
        return -1;

    if (dp[x] != 1e9)
        return dp[x];

    ll ans = 1e9, val;
    for (int i = 0; i < coins.size(); i++){
        val = minNoOfCoin(x-coins[i]);

        if (val != -1)
            ans = min(val+1, ans); //as I calculate for x-coins[i] t.k that means 
    }                             //for x tk I have to take val+1 coin
                                 //where the extra coin is coins[i]
    if (ans == 1e9)
        ans = -1;

    return dp[x] = ans;
}

void solve()
{
    //memset(dp, -1, sizeof(dp));
    for (int i = 0; i < MAX; i++){
        dp[i] = 1e9; //as we finding min 
    }               //initally we take MAX at every case
    
    int n, x;
    cin>>n>>x;

    coins.resize(n);
    for (int i = 0; i < n; i++){
        cin>>coins[i];
    }
    sort(coins.rbegin(), coins.rend());

    cout<<minNoOfCoin(x);
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
