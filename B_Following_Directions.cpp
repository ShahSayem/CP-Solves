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
    int n;
    cin>>n;
    string s;
    cin>>s;

   // bool grid[101][101];
    int x = 0, y = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == 'R'){
            x++;
        }
        else if (s[i] == 'L'){
            x--;
        }
        else if (s[i] == 'U'){
            y++;
        }
        else {
            y--;
        }

        if (x == 1 && y == 1){
            cout<<"YES";
            return;
        }
    }
    
    cout<<"NO";
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
