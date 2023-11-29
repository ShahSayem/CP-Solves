#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];

void solve()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    if (v[0] == v[n-1]){
        cout<<"YES";
        return;
    }

    for (int i = 0; i < n-1; i++){
        if (v[i] == v[0] && v[i+1] == v[n-1]){
            cout<<"YES";
            return;
        }
    }

    cout<<"NO";
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
