#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

//int dp[MAX];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int r, c;
    cin>>r>>c;

    char grid[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin>>grid[i][j];
        }
    }

    vector <string> v;
    for (int i = 0; i < r; i++){
        string s = "";
        for (int j = 0; j < c; j++){
            if (grid[i][j] == 'X'){
                if (s.size() > 1){
                    v.push_back(s);
                    s = "";
                }
            }
            else if (j == c-1){
                s += grid[i][j];
                if (s.size() > 1){
                    v.push_back(s);
                    s = "";
                }
            }
            else {
                s += grid[i][j];
            }
        }
    }

    for (int i = 0; i < r; i++){
        string s = "";
        for (int j = 0; j < c; j++){
            if (grid[j][i] == 'X'){
                if (s.size() > 1){
                    v.push_back(s);
                    s = "";
                }
            }
            else if (j == c-1){
                s += grid[j][i];
                if (s.size() > 1){
                    v.push_back(s);
                    s = "";
                }
            }
            else {
                s += grid[j][i];
            }
        }
    }
    
    sort(v.begin(), v.end());

    cout<<v[0];
    // for (int i = 0; i < v.size(); i++){
    //     cout<<v[i]
    // }
    
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
