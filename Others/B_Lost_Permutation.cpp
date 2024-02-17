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

void solve()
{
    ll m, s, x, sum = 0, mx = 0;
    cin>>m>>s;

    for (ll i = 0; i < m; i++){
        cin>>x;
        s += x;
        mx = max(mx, x);
    }
    
    for (ll i = 1; ; i++){
        sum += i;

        if (s == sum && i >= mx){
            cout<<"YES";
            return;
        }
        else if (s < sum){
            cout<<"NO";
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
