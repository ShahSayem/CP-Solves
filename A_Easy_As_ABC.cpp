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
    

    vector <string> v;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                for (int l = 0; l < 3; l++){
                    for (int m = 0; m < 3; m++){
                        for (int n = 0; n < 3; n++){
                            if ((make_pair(i, j) != make_pair(k, l)) && (make_pair(i, j) != make_pair(m, n)) && (make_pair(k, l) != make_pair(m, n))){
                                                                                                                          //2nd                                                                              //3rd
                                if ((((i+1 == k) || (i-1 == k) || (i == k)) && ((j+1 == l) || (j-1 == l) || (j == l))) && (((i+1 == m) || (i-1 == m) || (i == m)) && ((j+1 == n) || (j-1 == n) || (j == n))) && (((k+1 == m) || (k-1 == m) || (k == m)) && ((l+1 == n) || (l-1 == n) || (l == n)))){
                                    string s = "";
                                    s += grid[i][j];
                                    s += grid[k][l];
                                    s += grid[m][n];

                                    v.push_back(s);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    sort(v.begin(), v.end());
    //cout<<v[0];

    for (auto it : v){
        cout<<it<<" ";
    }
    
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
