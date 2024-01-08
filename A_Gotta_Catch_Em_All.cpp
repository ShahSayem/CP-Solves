#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    string s, x = "Bulbasaur";
    cin>>s;

    map <char, int> mp;
    for (int i = 0; i < s.size(); i++){
            mp[s[i]]++;
    }

    int one = min({mp['B'], mp['b'], mp['l'], mp['s'], mp['r']});
    int two = min(mp['a'], mp['u']);
    int ans = min(one, (two / 2));
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
