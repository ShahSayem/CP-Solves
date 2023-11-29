#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MOD = 1e9+7;
const int MAX = 1e7+5;

int dp[105][100005];
int arr[105];
int n, k;

int subsetSumEqK(int idx, int sum)
{
    if (sum == 0)
        return 1;

    if (idx == 0){
        if (sum == arr[0])
            return 1;

        return 0;
    }

    if (dp[idx][sum] != -1)
        return dp[idx][sum];


    int pick = 0, notPick;
    notPick = subsetSumEqK(idx-1, sum);
    if (arr[idx] <= sum)
        pick = subsetSumEqK(idx-1, sum-arr[idx]);

    return dp[idx][sum] = (pick%MOD + notPick%MOD) % MOD;
}

void solve()
{
    cin>>n>>k;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<subsetSumEqK(n-1, k); 
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
