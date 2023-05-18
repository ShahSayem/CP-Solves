#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

//int dp[MAX];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n;
    cin>>n;
    vector <ll> v(n), preSum(n), sufSum(n);

    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    preSum[0] = v[0];
    for (int i = 1; i < n; i++){
        preSum[i] = preSum[i-1]+v[i];
    }

    sufSum[n-1] = v[n-1];
    for (int i = n-2; i >= 0; i--){
        sufSum[i] = sufSum[i+1]+v[i];
    }

    ll ans = 0;
    for (int i = 0; i < n-1; i++){
        ans = max(ans, __gcd(preSum[i], sufSum[i+1]));
    }

    cout<<ans;
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
