//Shah Sayem
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
    int n;
    cin>>n;

    ll mn = 1024, mx = 0;
    vector <ll> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }

    for (int i = 0; i < n; i++){
        mn &= v[i];
        mx |= v[i];
    }   

    cout<<mx-mn;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}



