#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAX = 105;

//.......DP.........
int n, x, dp[MAX];
vector <int> coins(MAX, 0);

      //Idx
int rec(int i, int sum)
{
    if(i == n || sum == x)
        return 0;

    if(dp[i] != -1)
        return dp[i];

    dp[i] = rec(i+1, sum);  //coin ta nilam na case

    for (int k = i; k < n; k++){  //newa case
        if(coins[k]+sum <= x){
            dp[i] = min(dp[i], 1+rec(i+1, sum+coins[k]));
        }
        // else {
        //     break;
        // }
    }
    
    return dp[i];
}

int main()
{
    Shah_Sayem
    memset(dp, -1, sizeof(dp));

    cin>>n, x;
    for (int i = 0; i < n; i++){
        cin>>coins[i];
    }
    sort(coins.begin(), coins.end());

    cout<<rec(0, 0);

    return 0;
}
