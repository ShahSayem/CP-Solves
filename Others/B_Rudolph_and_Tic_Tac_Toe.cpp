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

void solve()
{
    char grid [3][3];
    int cnt;
    string ans = "";
    bool check = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin>>grid[i][j];
        }
    }

    for (int i = 0; i < 3; i++){
        cnt = 1;
        for (int j = 0; j < 3; j++){
            if (j){
                if(grid[i][j] == grid[i][j-1]){
                    cnt++;
                }
            }

            if (cnt == 3 && grid[i][j] != '.'){
                ans += grid[i][j];
                cout<<ans;

                return;
            }
        }
    }
    
    for (int j = 0; j < 3; j++){
        cnt = 1;
        for (int i = 0; i < 3; i++){
            if (i){
                if(grid[i][j] == grid[i-1][j]){
                    cnt++;
                }
            }

            if (cnt == 3 && grid[i][j] != '.'){
                ans += grid[i][j];
                cout<<ans;

                return;
            }
        }
    }

    if ((grid[0][0] == grid[1][1]) && grid[0][0] == grid[2][2]){
        if (grid[0][0] != '.'){
            ans += grid[0][0];
            cout<<ans;

            return;
        }
    }
    else if ((grid[0][2] == grid[1][1]) && grid[0][2] == grid[2][0]){
        if (grid[0][2] != '.'){
            ans += grid[0][2];
            cout<<ans;

            return;
        }
    }

    ans = "DRAW";
    cout<<ans;

    //cout<<ans;
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
