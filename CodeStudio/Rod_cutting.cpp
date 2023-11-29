#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1000+5;

int dp[105][10005];
vector <int> price(105);

int unboundKnapsack(int idx, int rem)
{
    if (idx == 0){
        if (idx+1 <= rem){
            return (price[idx] * (rem/(idx+1)));
        }
        else {
            return 0;
        }
    }

    if (dp[idx][rem] != -1)
        return dp[idx][rem];
        
    int pick = 0, notPick;
    if (idx+1 <= rem) //Infinite Supply
        pick = price[idx] + unboundKnapsack(idx, rem-(idx+1));

    notPick = unboundKnapsack(idx-1, rem);

    return dp[idx][rem] = max(pick, notPick);
}

void solve()
{
    int n;
    cin>>n;

    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++){
        cin>>price[i];
    }

    int rem = n;
    cout<<unboundKnapsack(n-1, rem);
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
