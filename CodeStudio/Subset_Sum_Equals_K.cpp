#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e4+5;
int n, k, dp[MAX][MAX], arr[MAX];

bool subsetSumEqK(int idx, int sum)
{
    if (sum == k){
        return 1;
    }

    if (idx == -1){
        if (sum == k)
            return 1;
        else 
            return 0;
    }

    if (dp[idx][sum] != -1){
        return dp[idx][sum];
    }

    bool pick = 0, notPick = 0;
    if (arr[idx]+sum <= k)
        pick = subsetSumEqK(idx-1, sum+arr[idx]);
        
    notPick = subsetSumEqK(idx-1, sum);

    return dp[idx][sum] = (pick | notPick);
}

void solve()
{
    cin>>n>>k;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    
    cout<<subsetSumEqK(n-1, 0);
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
