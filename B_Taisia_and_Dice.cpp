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
    int n, s, r, x, z, sum = 0;
    cin>>n>>s>>r;

    x = s-r;
    cout<<x<<" ";
    
    int y = r%(n-1);
    for (int i = 0; i < n-1; i++){
        if (y){
            z = (r/(n-1))+1;
            y--;
        }
        else {
            z = (r/(n-1));
        }

        cout<<z<<" ";
    }
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
