#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e5+5;

int dp[MAX];
int n;
vector <int> height(MAX);

int minCost(int idx)
{
    if (idx == 0)
        return 0;

    if (dp[idx] != -1)
        return dp[idx];

    int left, right = INT_MAX;
    left = minCost(idx-1) + abs(height[idx] - height[idx-1]);

    if (idx > 1)
        right = minCost(idx-2) + abs(height[idx] - height[idx-2]);

    return dp[idx] = min(left, right);
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    cin>>n;

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
