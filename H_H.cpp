#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];

int main()
{
    Shah_Sayem

    int n, m, c;
    cin>>n>>m>>c;

    int grid[m+1][n+1];
    char gr[m+1][n+1];
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin>>gr[i][j];
        }
    }
    
    vector <int> v(c);
    map <char, int> mp;
    char x = 'a';
    for (int i = 0; i < c; i++){
        cin>>v[i];

        mp[x] = v[i];
        x++;
    }
    mp['.'] = INT_MAX;
    mp['B'] = INT_MAX;

    // for (auto it : mp){
    //     cout<<it.first<<"="<<it.second<<"\n";
    // }
    


    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            grid[i][j] = mp[gr[i][j]];
        }
    }

    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            grid[i][j] = mp[gr[i][j]];
        }
    }

    return 0;
}
