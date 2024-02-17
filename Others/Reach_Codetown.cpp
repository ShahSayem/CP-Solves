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
    string s, x = "CODETOWN";
    cin>>s;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'A' || s[i] == 'I' || s[i] == 'E' || s[i] == 'O' || s[i] == 'U'){
            if (x[i] == 'A' || x[i] == 'I' || x[i] == 'E' || x[i] == 'O' || x[i] == 'U'){
                continue;
            }

            cout<<"NO";
            return;
        }
        else {
            if (x[i] == 'A' || x[i] == 'I' || x[i] == 'E' || x[i] == 'O' || x[i] == 'U'){
                cout<<"NO";
                return;
            }
        }
    }
    
    cout<<"YES";
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
