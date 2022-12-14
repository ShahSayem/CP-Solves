#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
//vector <int> adj[10000000];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

int bigMod(int b, int p, int m)
{
    if (p == 0)
        return 1;
    else if (p%2){
        int x = b%m;
        int y = (bigMod(b, p-1, m))%m;

        return (x*y)%m;
    }
    else {
        int x = (bigMod(b, p/2, m))%m;

        return (x*x)%m;
    }
}

void solve()
{
    int b, p, m;
    while (cin>>b>>p>>m){
        cout<<bigMod(b, p, m)<<"\n";
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while (t--){
        solve();
    // }

    return 0;
}
