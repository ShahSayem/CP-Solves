#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1000+5;

int dp[1005][1005];
vector <int> weight(1005), profit(1005);

int unboundKnapsack(int idx, int wt)
{
    if (idx == 0){
        if (weight[idx] <= wt){
            return (profit[idx] * (wt/weight[idx]));
        }
        else {
            return 0;
        }
    }

    if (dp[idx][wt] != -1)
        return dp[idx][wt];
        
    int pick = 0, notPick;
    if (weight[idx] <= wt) //Infinite Supply
        pick = profit[idx] + unboundKnapsack(idx, wt-weight[idx]);

    notPick = unboundKnapsack(idx-1, wt);

    return dp[idx][wt] = max(pick, notPick);
}

void solve()
{
    int n, wt;
    cin>>n>>wt;

    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++){
        cin>>profit[i];
    }
    
    for (int i = 0; i < n; i++){
        cin>>weight[i];
    }

    cout<<unboundKnapsack(n-1, wt);
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
