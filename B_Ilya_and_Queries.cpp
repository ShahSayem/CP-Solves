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
    string s;
    cin>>s;

    int m, n, l, r, cnt = 0;
    cin>>m;

    n = s.size();
    vector <int> v(n);
    for (int i = 1; i < n; i++){
        if (s[i] == s[i-1])
            cnt++;

        v[i] = cnt;
    }
    
    while (m--){
        cin>>l>>r;
        cout<<v[r-1]-v[l-1]<<"\n";
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
