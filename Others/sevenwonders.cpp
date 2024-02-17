#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    string s;
    cin>>s;

    map <char, int> mp;
    int n = s.size();
    for (int i = 0; i < n; i++){
        mp[s[i]]++;
    }

    int t = mp['T'];
    int c = mp['C'];
    int g = mp['G'];

    ll ans = (t*t)+(c*c)+(g*g) + (min({t, c, g})*7);
    cout<<ans;
}

int main()
{
    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
