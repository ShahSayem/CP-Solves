#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    ll n, f, a, b, curr;
    cin>>n>>f>>a>>b;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    

    curr = min(b, (a*ll(v[0])));
    f -= curr;
    if (f <= 0){
        cout<<"NO";
        return;
    }

    for (int i = 1; i < n; i++){
        curr = min(b, (a*ll(v[i]-v[i-1])));
        f -= curr;

        if (f <= 0){
            cout<<"NO";
            return;
        }
    }

    cout<<"YES";
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
