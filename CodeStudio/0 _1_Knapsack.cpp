#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 100+5;

int dp[MAX][1005];
vector <int> weight(MAX), value(MAX), maxWeight;

int knapsack_01(int idx, int wt)
{
    if (idx == 0){
        if (weight[idx] <= wt){
            return value[idx];
        }
        else {
            return 0;
        }
    }

    if (dp[idx][wt] != -1)
        return dp[idx][wt];
        
    int pick = 0, notPick;
    if (weight[idx] <= wt)
        pick = value[idx] + knapsack_01(idx-1, wt-weight[idx]);

    notPick = knapsack_01(idx-1, wt);

    return dp[idx][wt] = max(pick, notPick);
}

void solve()
{
    int n, wt;
    cin>>n;

    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++){
        cin>>weight[i];
    }
    
    for (int i = 0; i < n; i++){
        cin>>value[i];
    }

    cin>>wt;

    cout<<knapsack_01(n-1, wt);
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
