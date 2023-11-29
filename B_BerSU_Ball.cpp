#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAX = 105;

vector <int> boy(MAX), girl(MAX);
int dp[MAX][MAX];
int n, m;

int mxPair(int x, int y)
{
    if (x < 0 || y < 0)
        return 0;

    if (dp[x][y] != -1){
        return dp[x][y];
    }

    int pick = 0, notPick;
    if (abs(boy[x]-girl[y]) <= 1)
        pick = 1 + mxPair(x-1, y-1);
 
    notPick = max(mxPair(x, y-1), mxPair(x-1, y));
    
    return dp[x][y] = max(pick, notPick);
}

int main()
{
    Shah_Sayem
    memset(dp, -1, sizeof(dp));

    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>boy[i];
    }
    sort(boy.begin(), boy.begin()+n);

    cin>>m;
    for (int i = 0; i < m; i++){
        cin>>girl[i];
    }
    sort(girl.begin(), girl.begin()+m);

    cout<<mxPair(n-1, m-1);

    return 0;
}
