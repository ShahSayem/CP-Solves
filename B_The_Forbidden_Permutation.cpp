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
    int n, m, d;
    cin>>n>>m>>d;

    vector <int> p(n), a(m);
    for (int i = 0; i < n; i++){
        cin>>p[i];
    }

    for (int i = 0; i < m; i++){
        cin>>a[i];
    }

    map <int, int> mp;
    for (int i = 0; i < n; i++){
        mp[p[i]] = i;
    }

    for (int i = 0; i < m-1; i++){
        if (((mp[a[i]]+d) < mp[a[i+1]] || mp[a[i]] > mp[a[i+1]])){

        }
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
