#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];

void solve()
{
    int n;
    cin>>n;

    bool check = 0;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (i && v[i] < v[i-1]){
            check = 1;
        }
    }
    
    if (check){
        cout<<0;

        return;
    }

    int mn = INT_MAX, x, y;
    for (int i = 1; i < n; i++){
        if (v[i]-v[i-1] < mn){
            mn = v[i]-v[i-1];

            x = v[i-1], y = v[i];
        }
    }
    
    int cnt = (mn/2)+1;
    
    
    cout<<cnt;
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
