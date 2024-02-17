#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e5+5;

int dp[MAX];
int n, k;
vector <int> height(MAX);

int minCost(int idx)
{
    if (idx == 0)
        return 0;

    if (dp[idx] != -1)
        return dp[idx];

    int curr = INT_MAX;
    for (int i = 1; i <= k; i++){
        if (idx-i >= 0)
            curr = min(curr, minCost(idx-i) + abs(height[idx] - height[idx-i]));
    }

    return dp[idx] = curr;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    cin>>n>>k;

    for (int i = 0; i < n; i++){
        cin>>height[i];
    }
    
    cout<<minCost(n-1);
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
