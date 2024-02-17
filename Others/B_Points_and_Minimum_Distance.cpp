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
    n *= 2;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    
    ll pathSum = 0;
    vector < pair<int, int> > ans(n/2);
    for (int i = 0; i < n/2; i++){
        ans[i] = {v[i], v[n-i-1]};

        if (i){
            pathSum += (abs(ans[i].first - ans[i-1].first) + abs((ans[i].second - ans[i-1].second)));
        }
    }
    
    cout<<pathSum<<"\n";
    for (int i = 0; i < n/2; i++){
        cout<<ans[i].first<<" "<<ans[i].second<<"\n";
    } 
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        //cout<<"\n";
    }

    return 0;
}
