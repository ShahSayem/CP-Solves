#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    string s, t;
    cin>>s>>t;

    if (s < t)
        swap(s, t);
    else if (s == t){
        cout<<0;
        return;
    }

    int n = s.size(), m = t.size(), idx = n-1;
    for (int i = m-1; i >= 0; i--){
        if (t[i] != s[idx]){
            cout<<i+idx+2;

            // cout<<"\n Here";
            return;
        }
        idx--;
    }
    
    if (n != m)
        cout<<n-m;
    else 
        cout<<n+m;
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
