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
    int x, y, n, temp;
    cin>>x>>y>>n;

    temp = 1;
    vector <int> v(n), vec;
    v[0] = x, v[n-1] = y;
    for (int i = n-2; i > 0; --i){
        v[i] = (v[i+1]-temp);
        temp++;
    }

    if (v[1]-temp < v[0]){
        cout<<-1;
    }
    else {
        for (auto it: v){
            cout<<it<<" ";
        }
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