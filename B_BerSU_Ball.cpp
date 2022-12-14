//Shah Sayem
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 102;

///.........Graph.........///
//vector <int> adj[10000000];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

//.......DP.........
int n, m, boy[MAX], girl[MAX], dp[MAX][MAX];

int rec(int i, int j)
{
    if(i == n || j == m)
        return 0;

    int &ret = dp[i][j];

    if(~ret)
        return ret;

    ret = rec(i+1, j);

    for (int k = j; k < m; k++){
        if(boy[i]-1 == girl[k] || boy[i] == girl[k] || boy[i]+1 == girl[k]){
            ret = max(ret, 1+rec(i+1, k+1));
        }
    }
    
    return ret;
}

void solve()
{
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
