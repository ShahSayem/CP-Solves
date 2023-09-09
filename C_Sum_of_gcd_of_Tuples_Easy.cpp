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

void solve()
{
	int n, gcd1, gcdF;
	cin>>n;
	
    ll sum = 0;
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= n; ++j){
            for (int k = 1; k <= n; ++k){
                gcd1 = __gcd(i, j);
                gcdF = __gcd(gcd1, k);

                sum += gcdF;
            }
        }
    }

    cout<<sum;
}
 
int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}