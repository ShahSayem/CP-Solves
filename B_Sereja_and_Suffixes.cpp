#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 100000;

///.........Graph.........///
//vector <int> adj[10000000];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, m, cnt = 0;
    cin>>n>>m;

    vector <int> v(n);
    vector <int> vCnt(n);
    vector <bool> check(MAX+1, 0);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    for (int i = n-1; i >= 0; i--){
        if (!check[v[i]]){
            cnt++;
        }
        check[v[i]] = 1;
        vCnt[i] = cnt;
    }

    int l;
    while (m--){
        cin>>l;
        cout<<vCnt[l-1]<<"\n";
    }
    
    
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
