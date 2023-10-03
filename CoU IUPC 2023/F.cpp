#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, m, q;
    cin>>n>>m>>q;

    ll price, id, amount;
    vector < vector <ll> > v(m);
    for (int i = 0; i < n; i++){
        cin>>price>>id;
        id--;
        v[id].push_back(price);
    }

    vector <ll> discount(m), vec, preSum(n);
    for (int i = 0; i < m; i++){
        cin>>discount[i];
    }
    
    for (int i = 0; i < m; i++){
        sort(v[i].begin(), v[i].end());
        for (int j = 0; j < v[i].size(); j++){
            if (discount[i] == 0){
                break;
            }

            if (discount[i] > v[i][j]){
                discount[i] -= v[i][j];
                v[i][j] = 0;
            } 
            else {
                v[i][j] -= discount[i];
                discount[i] = 0;
                break;
            }
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < v[i].size(); j++){
            vec.push_back(v[i][j]);
        }
    }
    sort(vec.begin(), vec.end());

    preSum[0] = vec[0];
    for (int i = 1; i < n; i++){
        preSum[i] = preSum[i-1]+vec[i];
    }
    
    while (q--){
        cin>>amount;

        ll ans = upper_bound(preSum.begin(), preSum.end(), amount)-preSum.begin();

        cout<<ans<<"\n";
    }   
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
    }

    return 0;
}
