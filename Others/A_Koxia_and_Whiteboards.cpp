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
    int n, m;
    cin>>n>>m;

    vector <ll> a(n), b(m);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++){
        cin>>b[i];
    }

    ll sum = 0, x = n;
    for (int i = 0; i < m; i++){
        a[0] = b[i];

        sort(a.begin(), a.end());
    }

    for (int i = 0; i < n; i++){
        sum += a[i];
    }

    cout<<sum;
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
