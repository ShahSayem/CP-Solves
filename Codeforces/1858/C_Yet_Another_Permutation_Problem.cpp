#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e5+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
bool vis[MAX];

void solve()
{
    int n;
    cin>>n;

    memset(vis, 0, sizeof(vis));
    vector <int> v;
    int cnt = 0, i = 1, start = 0;
    while (cnt < n){
        i = start+1;
        start = i;
        while (i <= n){
            if (!vis[i]){
                v.push_back(i);
                vis[i] = 1;
                cnt++;
                i *= 2;
            }
            else {
                break;
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
     
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
