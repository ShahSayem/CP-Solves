#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, m;
    cin>>n>>m;

    int a, b;
    multiset <int> st, st0;
    for (int i = 0; i < n; i++){
        cin>>a;

        st0.insert(a);
    }

    for (int i = 0; i < m; i++){
        cin>>b;

        st.insert(b);
    }


    ll ans = 0;
    int x, y, p, q;
    while (!st0.empty()){
        p = *(st0.begin());
        q = *(st0.rbegin()); 

        x = *(st.begin());
        y = *(st.rbegin());

        vector <int> v;
        v.push_back(abs(p-x));
        v.push_back(abs(p-y));
        v.push_back(abs(q-x));
        v.push_back(abs(q-y));
        sort(v.rbegin(), v.rend());

        if (v[0] == abs(p-x)){
            st0.erase(st0.find(p));
            st.erase(st.find(x));

            ans += abs(p-x);
        }
        else if (v[0] == abs(p-y)){
            st0.erase(st0.find(p));
            st.erase(st.find(y));

            ans += abs(p-y);
        }
        else if (v[0] == abs(q-x)){
            st0.erase(st0.find(q));
            st.erase(st.find(x));

            ans += abs(q-x);
        }
        else {
            st0.erase(st0.find(q));
            st.erase(st.find(y));

            ans += abs(q-y);
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
