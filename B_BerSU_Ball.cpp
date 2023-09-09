#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAX = 105;

//.......DP.........
int n, m, boy[MAX], girl[MAX], dp[MAX][MAX];

     //boyIdx  girlIdx
int rec(int i, int j)
{
    if(i == n || j == m)
        return 0;

    if(dp[i][j] != -1)
        return dp[i][j];

    dp[i][j] = rec(i+1, j);  //chele ta nilam na case

    for (int k = j; k < m; k++){  //newa case
        if(abs(boy[i]-girl[k]) <= 1){
            dp[i][j] = max(dp[i][j], 1+rec(i+1, k+1));
        }
        else {
            break;
        }
    }
    
    return dp[i][j];
}

int main()
{
    Shah_Sayem
    memset(dp, -1, sizeof(dp));

    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>boy[i];
    }
    sort(boy, boy+n);

    cin>>m;
    for (int i = 0; i < m; i++){
        cin>>girl[i];
    }
    sort(girl, girl+m);

    cout<<rec(0, 0);

    return 0;
}
