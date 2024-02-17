#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, k, x;
    cin>>n;

    set <int> st;
    vector < vector <int> > v(n);
    for (int i = 0; i < n; i++){
        cin>>k;
        for (int j = 0; j < k; j++){
            cin>>x;
            v[i].push_back(x);
            st.insert(x);
        }
    }

    int ans = 0, sz;
    for (auto it: st){
        set <int> taken;
        for (int j = 0; j < n; j++){
            if (count(v[j].begin(), v[j].end(), it) == 0){
                for (auto it2: v[j])
                    taken.insert(it2);
            }     
        }
        
        sz = taken.size();
        if (sz != st.size()){
            ans = max(sz, ans);
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
