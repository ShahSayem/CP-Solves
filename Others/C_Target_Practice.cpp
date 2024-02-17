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
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    char grid[10][10];
    ll sum = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cin>>grid[i][j];

            if (grid[i][j] == 'X'){
                if (i == 0 || j == 0 || i == 9 || j == 9){
                    sum += 1;
                }
                else if ((i == 1 && (j >= 1 && j <= 8)) || (i == 8 && (j >= 1 && j <= 8)) || (j == 1 && (i >= 1 && i <= 8)) || (j == 8 && (i >= 1 && i <= 8))){
                    sum += 2;
                }
                else if ((i == 2 && (j >= 2 && j <= 7)) || (i == 7 && (j >= 2 && j <= 7)) || (j == 2 && (i >= 2 && i <= 7)) || (j == 7 && (i >= 2 && i <= 7))){
                    sum += 3;
                }
                else if ((i == 3 && (j >= 3 && j <= 6)) || (i == 6 && (j >= 3 && j <= 6)) || (j == 3 && (i >= 3 && i <= 6)) || (j == 6 && (i >= 3 && i <= 6))){
                    sum += 4;
                }
                else {
                    sum += 5;
                }
            }
        }
    }
    
    cout<<sum;
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
