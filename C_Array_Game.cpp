#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll n, k, ans = 1e18;
    cin>>n>>k;

    vector <ll> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    ans = v[0];
    if (k >= 3){
        ans = 0;
    }
    else if (k == 1){
        for (int i = 0; i < n-1; i++){
            ans = min(abs(v[i]-v[i+1]), ans);
        }
    }
    else { //2
        ll curr, idx;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i == j){
                    continue;
                }

                curr = abs(v[i]-v[j]);
                ans = min(curr, ans);
                idx = lower_bound(v.begin(), v.end(), curr)-v.begin();

                if (idx < n)
                    ans = min(abs(curr-v[idx]), ans);

                if (idx){
                    ans = min(abs(curr-v[idx-1]), ans);
                }
            }
        }
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
