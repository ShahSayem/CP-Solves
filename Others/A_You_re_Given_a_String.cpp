#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
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
    int n;
    string s;
    cin>>s;

    n = s.size();
    map <string, int> mp;
    vector <string> v;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n-i; ++j){
            v.push_back(s.substr(i, j+1));
            mp[s.substr(i, j+1)]++;
            //cout<<s.substr(i, j+1)<<"\n";
        }
    }

    sort(v.rbegin(), v.rend());

    int sz = 0;
    for(auto it: v){
        if (mp[it] >= 2 && it.size() > sz){
            sz = it.size();
            //return;
        }
    }

    cout<<sz;
}
 
int main()
{
    Shah_Sayem
    // #ifndef ONLINE_JUDGE
    //     freopen("Input.txt", "r", stdin);
    //     freopen("Output.txt", "w", stdout);
    //     freopen("Error.txt", "w", stderr);
    // #endif

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}