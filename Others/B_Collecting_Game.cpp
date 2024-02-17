#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    cin>>n;

    vector < pair <int, int> > v(n);
    vector <ll> ans(n), a(n), preSum(n);
    for (int i = 0; i < n; i++){
        cin>>v[i].first;

        a[i] = v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());

    preSum[0] = v[0].first;
    for (int i = 1; i < n; i++){
        preSum[i] = preSum[i-1] + v[i].first;
    }
    
    ans[v[n-1].second] = n-1;
    for (int i = n-2; i >= 0; i--){
        if (preSum[i] >= a[v[i+1].second]){
            ans[v[i].second] = ans[v[i+1].second];
        }
        else {
            ans[v[i].second] = i;
        }
    }
    
    for (int i = 0; i < n; i++){
        cout<<ans[i]<<" ";
    }
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
