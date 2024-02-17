#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
//vector <int> adj[10000000];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, m, k;
    cin>>n>>m>>k;

    vector <int> v(m+1);
    for (int i = 0; i < m+1; i++){
        cin>>v[i];
    }

    int x = v[m], y, cnt = 0;
    for (int i = 0; i < m; i++){
        y = x^v[i];

        y = __builtin_popcount(y);

        if (y <= k)
            cnt++;
    }
    
    cout<<cnt;
}

int main()
{
    Shah_Sayem

    int t = 1;
    //cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}