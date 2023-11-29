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
    int n;
    cin>>n;

    vector <int> v(n);
    vector <ll> preSum(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    ll last = v[0], ans = INT_MIN;
    preSum[0] = v[0];
    for (int i = 1; i < n; i++){
        if (((v[i-1] & 1) != (v[i] & 1)) && preSum[i-1] >= 0){
            preSum[i] = v[i] + preSum[i-1];
        }
        else {
            preSum[i] = v[i];
        }
        last = v[i];

        ans = max(preSum[i] ,ans);
    }

    for (int i = 0; i < n; i++){
        ans = max(ll(v[i]), ans);
        //cout<<preSum[i]<<" ";
    }

    cout<<ans;
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
