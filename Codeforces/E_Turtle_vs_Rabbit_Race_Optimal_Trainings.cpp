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

    vector <int> v(n), preSum(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (!i){
            preSum[i] = v[i];
        }
        else {
            preSum[i] = preSum[i-1] + v[i];
        }
    }
    
    ll curr;
    int q, l, u, idx;
    cin>>q;
    while (q--){
        cin>>l>>u;
        l--;
        curr = u;
        if (l)
            curr += preSum[l-1];

        idx = lower_bound(preSum.begin(), preSum.end(), curr)-preSum.begin();

        if (idx <= l)
            cout<<l+1;
        else if (idx >= n)
            cout<<n;
        else {
            if (abs(preSum[idx]-curr) <= abs(preSum[idx-1]-curr))
                cout<<idx+1;
            else 
                cout<<idx;
        }

        cout<<" ";
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
