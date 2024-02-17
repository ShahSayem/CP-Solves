#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, k;
    cin>>n>>k;

    vector <int> v(n);
    vector <ll> preSum(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    preSum[0] = v[0];
    for (int i = 1; i < n; i++){
        preSum[i] = preSum[i-1] + v[i];
    }

    ll prev;
    for (int i = k-1; i < n; i++){
        prev = preSum[i-1];

        if (i-k >= 0)
            prev -= preSum[i-k];

        if (prev > v[i]){
            cout<<"Yes";
            return;
        }
    }

    cout<<"No";
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
