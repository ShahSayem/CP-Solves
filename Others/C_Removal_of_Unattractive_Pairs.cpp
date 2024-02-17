#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, mx = 0, left;
    string s;

    cin>>n>>s;

    map <char, int> mp;
    for (int i = 0; i < n; i++){
        mp[s[i]]++;

        mx = max(mp[s[i]], mx);
    }
    
    left = mx - (n-mx);

    if (left > 0)
        cout<<left;
    else
        cout<<(n & 1);
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
