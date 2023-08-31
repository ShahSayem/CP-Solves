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
    int n, m;
    cin>>n>>m;

    char grid[n][m];
    
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin>>grid[i][j];
        }
    }

    int cnt = 0;
    vector <char> vec = {'v', 'i', 'k', 'a'};
    for (int i = 0; i < m; ++i){
        for (int j = 0; j < n; ++j){
            if (grid[j][i] == vec[cnt]){
                cnt++;

                if (cnt == 4){
                    cout<<"YES";
                    return;
                }

                break;
            }
        }
    }

    cout<<"NO";
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