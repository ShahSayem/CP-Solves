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
    int n, x = 0;
    cin>>n;

    int a, b, ans;
    for (int i = 0; i < n; i++){
        cin>>a>>b;

        if (a < 11){
            x = max(b, x);

            if (x == b){
                ans = i;
            }
        }
    }
    
    cout<<ans+1;
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
