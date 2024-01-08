#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e5+5;

void solve()
{
    ll n, ans = 0;
    string s;
    set <char> st;
    cin>>n>>s;

    for (int i = 0; i < n; i++){
        st.insert(s[i]);

        ans += st.size();
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
