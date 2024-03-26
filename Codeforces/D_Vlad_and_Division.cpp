#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, ans;
    cin>>n;

    string bits, fBits;
    vector <int> v(n);
    map <string, int> mp;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        bitset <31> bt(v[i]);
        bits = bt.to_string();
        mp[bits]++;
    }

    ans = n;
    for (int i = 0; i < n; i++){
        bitset <31> bt(v[i]);
        bits = bt.to_string();

        bt.flip();
        fBits = bt.to_string();

        if (mp[bits] && mp[fBits]){
            mp[bits]--;
            mp[fBits]--;
            ans--;
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
