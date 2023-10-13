#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e6+5;

ll dp[MAX];
vector <int> coins;

ll noOfWays(int x)
{
    if (x == 0)
        return 0;

    if (x < 0)
        return -1;

    if (dp[x] != -2)
        return dp[x];

    ll cnt = 0, curr;
    for (int i = 0; i < coins.size(); i++){
        curr = noOfWays(x-coins[i]);

        if (curr != -1)
            cnt++; //as I calculate for x-coins[i] t.k that mecnt 
    }                             //for x tk I have to take curr+1 coin
                                 //where the extra coin is coins[i]
    if (cnt == -2)
        cnt = -1;

    return dp[x] = cnt;
}

void solve()
{
    //memset(dp, -1, sizeof(dp));
    for (int i = 0; i < MAX; i++){
        dp[i] = -2; //as we finding min 
    }               //initally we take MAX at every case
    
    int n, x;
    cin>>n>>x;

    coins.resize(n);
    for (int i = 0; i < n; i++){
        cin>>coins[i];
    }
    sort(coins.rbegin(), coins.rend());

    cout<<powl(2LL, noOfWays(x));
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    for (int i = 1; i <= tc; i++){
        //cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
