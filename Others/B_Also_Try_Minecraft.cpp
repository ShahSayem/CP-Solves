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
    int n, m;
    cin>>n>>m;
    vector <int> v(n);
    vector <ll> prefSum(n), sufSum(n);

    prefSum[0] = 0;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (i){
            if (v[i] < v[i-1])
                prefSum[i] = prefSum[i-1] + v[i-1]-v[i];
            else
                prefSum[i] = prefSum[i-1];
        }
    }

    sufSum[n-1] = 0;
    for (int i = n-2; i >= 0; i--){
        if (v[i] < v[i+1])
            sufSum[i] = sufSum[i+1] + v[i+1]-v[i];
        else
            sufSum[i] = sufSum[i+1];
    }
    
    int s,t;
    while (m--){
        cin>>s>>t;
        if (s < t)
            cout<<prefSum[t-1]-prefSum[s-1]<<"\n";
        else
            cout<<sufSum[t-1]-sufSum[s-1]<<"\n";
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
        cout<<"\n";
    // }

    return 0;
}
