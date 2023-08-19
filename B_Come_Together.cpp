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
    int ax, ay, bx, by, cx, cy;
    cin>>ax>>ay;
    cin>>bx>>by;
    cin>>cx>>cy;

    int walk = 1;
    if (ay > by && ay > cy){
        walk += min(ay-by, ay-cy);
    }
    else if (ay <= by && ay <= cy){
        walk += min(by-ay, cy-ay);
    }

    if (ax > bx && ax > cx){
        walk += min(ax-bx, ax-cx);
    }
    else if (ax <= bx && ax <= cx){
        walk += min(bx-ax, cx-ax);
    }

    cout<<walk;
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
