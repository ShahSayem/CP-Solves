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
    ll n, mn = MAX, mx = 0;
    cin>>n;
    vector <ll> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        mx = max(v[i], mx);
        mn = min(v[i], mn);
    }
    
    ll mnCnt = 0, mxCnt = 0;
    for (int i = 0; i < n; i++){
        if (v[i] == mn)
            mnCnt++;
        if (v[i] == mx)
            mxCnt++;
    }

    if (mx-mn == 0)
        cout<<n*(n-1);
    else 
        cout<<mnCnt*mxCnt*2;
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
