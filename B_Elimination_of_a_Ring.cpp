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
    int n, cnt = 0;
    cin>>n;

    vector <int> v(n);
    vector <bool> check(100, 0);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (!check[v[i]]){
            check[v[i]] = 1;
            cnt++;
        }
    }

    if (n == 1 || n == 2)
        cout<<n;
    else if (cnt > 2)
        cout<<n;
    else
        cout<<((n-2)/2)+2;
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
