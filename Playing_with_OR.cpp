#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, k;
    cin>>n>>k;

    vector <int> v(n), mark(n, 0), preSum(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (v[i] & 1){
            mark[i] = 1;
        }
    }

    int idx = 0, ans = 0;
    preSum[0] = mark[0];
    for (int i = 1; i < n; i++){
        preSum[i] = mark[i] + preSum[i-1];
    }
    
    if (preSum[k-1]){
        ans++;
    }
    for (int i = k; i < n; i++){
        if (preSum[i]-preSum[idx]){
            ans++;
        }

        idx++;
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
