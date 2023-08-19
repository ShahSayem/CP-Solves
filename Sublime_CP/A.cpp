#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;
 
//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];
 
///.........Graph.........///
//vector <int> adj[MAX];

void solve()
{
    lll x = 1e19;
    ll z = x/(1e3);
    map <int, int> mp;
    for (int i = 0; i < 5; ++i){
        mp[i] = i+5;
    }

    for (auto [k, v]: mp){
        cout<<k<<" "<<v<<" "<<z<<"\n";
    }
}
 
int main()
{
    Shah_Sayem
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}