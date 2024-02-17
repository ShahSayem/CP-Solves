#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 20+5;

int n;
int home[MAX][3], dp[MAX][3];

int minCost(int idx, int pos)
{
    if (idx < 0)
        return 0;

    if (dp[idx][pos] != -1)
        return dp[idx][pos];

    int curr = INT_MAX;
    for (int i = 0; i < 3; i++){
        if (i != pos)
            curr = min(curr, minCost(idx-1, i));
    }  

    return dp[idx][pos] = curr+home[idx][pos];
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    cin>>n;

    int r, g, b;
    for (int i = 0; i < n; i++){
            cin>>r>>g>>b;
            home[i][0] = r;
            home[i][1] = g;
            home[i][2] = b;
    }
    
    int ans = min({minCost(n-1, 0), minCost(n-1, 1), minCost(n-1, 2)});
    cout<<ans;
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
