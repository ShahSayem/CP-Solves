#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MOD = 1e9+7;
const int MAX = 1e7+5;

int dp[25][1005];
int nums[25];

int subsetSumEqK(int idx, int sum)
{
    if (idx == 0){
        if (sum == 0 && nums[0] == 0)
            return 2;
        if (sum == 0 || sum == nums[0])
            return 1;

        return 0;
    }

    if (dp[idx][sum] != -1)
        return dp[idx][sum];


    int pick = 0, notPick;
    notPick = subsetSumEqK(idx-1, sum);
    if (nums[idx] <= sum)
        pick = subsetSumEqK(idx-1, sum-nums[idx]);

    return dp[idx][sum] = pick + notPick;
}

void solve()
{
    int n, k;
    cin>>n>>k;
    int sum = 0;
    memset(dp, -1, sizeof(dp));
    for (int i = 0; i < n; i++){
        cin>>nums[i];

        sum += nums[i];
    }

    int target = (sum-k)/2;

    if (sum-k < 0 || (sum-k)%2)
        cout<<0;
    else 
        cout<<subsetSumEqK(n-1, target); 
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
