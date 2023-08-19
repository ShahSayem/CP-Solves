#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    string s;
    cin>>s;

    map <char, int> mp = {{'A', 1}, {'B', 10}, {'C', 100}, {'D', 1000}, {'E', 10000}};
    int n = s.size(), sum = 0;
    int mn = INT_MAX;
    multiset <int> st;
    for (int i = 0; i < n; i++){
        st.insert(mp[s[i]]);
    }

    for (int i = 0; i < n; i++){
        auto it = st.end();
        it--;

        if (mp[s[i]] >= *it){
            sum += mp[s[i]];

            mn = min(mp[s[i]], mn);
        }    
        else {
            sum -= mp[s[i]];

            mn = min(-mp[s[i]], mn);
        }

        auto it2 = st.lower_bound(mp[s[i]]);
        st.erase(it2);
    }


    int ans = sum - mn + mp['E'];
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
