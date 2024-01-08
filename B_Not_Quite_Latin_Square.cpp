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
    char grid[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin>>grid[i][j];
        }
    }
    
    int i, j, check = 0;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            if (grid[i][j] == '?'){
                check = 1;
                break;
            }
        }

        if (check){
            bool a = 0, b = 0, c = 0;
            for (int k = 0; k < 3; k++){
                if (grid[i][k] == 'A')
                    a = 1;
                else if (grid[i][k] == 'B')
                    b = 1;
                else if (grid[i][k] == 'C')
                    c = 1;
            }
            
            if (a && b){
                cout<<"C";
            }
            else if (a && c){
                cout<<"B";
            }
            else if (b && c){
                cout<<"A";
            }
            else {
                cout<<"C";
            }

            return;
        }
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
