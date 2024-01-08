#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n;
    cin>>n;

    vector < pair <int, int> > v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i].second>>v[i].first;
    }
    sort(v.begin(), v.end());

    ll ans = 0;
    oset <int> st;
    for (int i = 0; i < n; i++){
        ans += int(st.size()) - st.order_of_key(v[i].second);

        st.insert(v[i].second);
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
