#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAX = 1e4+5;
int n, dp[MAX][MAX], arr[MAX];


int subsetSumEqK(int idx, int sum, int curr)
{
    int ans = INT_MAX;
    if (idx == -1){
        ans = min(ans, abs(sum-curr));
        return ans;
    }

    if (dp[idx][sum] != -1){
        return dp[idx][sum];
    }

    int pick = INT_MAX, notPick = INT_MAX;
    if (sum-arr[idx] >= 0)
        pick = subsetSumEqK(idx-1, sum-arr[idx], curr+arr[idx]);
        
    notPick = subsetSumEqK(idx-1, sum, curr);

    return dp[idx][sum] = min(pick, notPick);
}

void solve()
{
    cin>>n;
    int sum = 0;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++){
        cin>>arr[i];

        sum += arr[i];
    }

    if (n == 1){
        cout<<arr[0];
        return;
    }

    cout<<subsetSumEqK(n-1, sum, 0);
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
