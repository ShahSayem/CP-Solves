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
    int p, s, r;
    cin>>p>>s>>r;

    if (p == s){
        if (r == 1){
            cout<<"Yes";
        }
        else {
            cout<<"No";
        }
    }
    else {
        cout<<"Yes";
    }
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
