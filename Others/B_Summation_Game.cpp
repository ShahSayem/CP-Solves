#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, k, x, val;
    cin>>n>>k>>x;

    ll sum = 0;
    vector <int> v(n);
    vector <ll> preSum(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        sum += v[i];
    }
    sort(v.rbegin(), v.rend());

    preSum[0] = v[0];
    for (int i = 1; i < n; i++){
        preSum[i] = v[i]+preSum[i-1];
    }

    ll curr, ans = sum-(2*preSum[x-1]);
    for (int i = 0; i < k; i++){
              //Alice            Bob
        curr = (sum-preSum[i])-(2*(preSum[min(i+x, n-1)]-preSum[i]));

        ans = max(curr, ans);
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
