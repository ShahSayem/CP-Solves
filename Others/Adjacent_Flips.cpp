#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    ll n;
    cin>>n;

    string s;
    cin>>s;

    stack <char> st;
    st.push(s[0]);
    for (int i = 1; i < n; i++){
        if (!st.empty() && st.top() == s[i])
            st.pop();
        else    
            st.push(s[i]);
    }
    
    if (st.size() < 2)
        cout<<"Yes";
    else 
        cout<<"No";
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
