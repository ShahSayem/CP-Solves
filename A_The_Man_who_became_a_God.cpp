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
struct two
{
    int f, s;
};

void solve()
{
    int n, k;
    cin>>n>>k;
    
    vector <int> v(n), mx;
    vector <two> substruct;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (i){
            substruct.push_back({(abs(v[i]-v[i-1])), i});
            mx.push_back(abs(v[i]-v[i-1]));
        }
    }
    sort(mx.begin(), mx.end());

    ll sum = 0;
    for (int i = 0; i+k-1 < mx.size(); i++){
        sum += mx[i];

        // cout<<mx[i]<<" ";
    }

    cout<<sum;
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
