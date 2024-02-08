#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 50+5;

int dp[MAX];
vector < pair<int, int> > v;

int longestLCM_XY(int idx)
{
    if (idx == 0)
        return 0;

    if (dp[idx] != -1)
        return dp[idx];

    int take, notTake = 0;
    take = minCost(idx-1) + abs(height[idx] - height[idx-1]);

    if (idx > 1)
        right = minCost(idx-2) + abs(height[idx] - height[idx-2]);

    return dp[idx] = max(left, right);
}

int main()
{
    Shah_Sayem

    int n;
    cin>>n;

    v.resize(n);
    for (int i = 0; i < n; i++){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    

    return 0;
}
