//Shah Sayem
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 4002;

///.........Graph.........///
//vector <int> adj[10000000];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

//...........DP..............//
int n, a, b, c, dp[MAX];

int rec(int x)
{
    if(n == 0)
        return 0;

    int &ret = dp[i];

    if(~ret)
        return ret;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    cin>>n>>a>>b>>c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
}
