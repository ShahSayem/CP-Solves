#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, idx;
    cin>>n;

    vector < pair<int, int> > v(n);
    vector <int> ans(n);
    for (int i = 0; i < n; i++){
        cin>>v[i].first;
        v[i].second = i;
    }
    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++){
        idx = v[i].second;
        ans[idx] = i+1;
    }

    for (auto it : ans){
        cout<<it<<" ";
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
