#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

int dp[MAX];

///.........Graph.........///
//vector <int> adj[10000000];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

int h[MAX];
int func(int i)
{
    if (i == 0)
        return 0;

    int cost = INT_MAX;

    if (dp[i] != -1)
        return dp[i];

    cost = min(cost, func(i-1)+abs(h[i]-h[i-1]));

    if (i > 1)
        cost = min(cost, func(i-2)+abs(h[i]-h[i-2]));
       
    return dp[i] = cost;
}

void solve()
{
    int n;
    cin>>n;

    for (int i = 0; i < n; i++){
        cin>>h[i];
    }
    
    cout<<func(n-1);
}

int main()
{
    Shah_Sayem

    memset(dp, -1, sizeof(dp));

    int t = 1;
    //cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
