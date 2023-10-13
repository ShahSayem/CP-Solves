#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

int powerSet(vector <int> &v)
{
    int n = v.size(), x = 1, mx = 1, sz;
    x = x<<n;

    int curr, idx;
    for (int i = 0; i < x; i++){
        curr = i, idx = 0;
        vector <int> currSubSeq;
        for (int j = 0; j < n; j++){
            if (curr & (1<<j)){
                sz = currSubSeq.size();
                if (sz == 0 || currSubSeq[sz-1] < v[j])
                    currSubSeq.push_back(v[j]);
            }
        }

        sz = currSubSeq.size();
        mx = max(sz, mx);
    }
    
    return mx;
}

void solve()
{
    int n;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    int ans = powerSet(v);

    cout<<ans;
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
