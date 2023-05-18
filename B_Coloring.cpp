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
    ll n, m, k;
    cin>>n>>m>>k;
    vector <ll> v(m);
    for (int i = 0; i < m; i++){
        cin>>v[i];
    }
    
    sort(v.begin(), v.end());
    ll j = m-1, rem = v[m-1];
    for (int i = 0; i < m-1; i++){

        if (rem < 0){
            rem += v[i];
        }
        else {
            rem -= v[i];
        }
    }
    
    if (rem < k){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
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
