#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;


void solve()
{
    string s;
    cin>>s;

    int k, n = s.size(), cnt = 0 ,ans = 0;
    cin>>k;

    map <char, int> mp;
    for (int i = 0; i < n; i++){
        if (!mp[s[i]]){
            cnt++;
        }

        mp[s[i]]++;
    }
    
    ans = k-cnt;

    if (n < k){
        cout<<"impossible";
    }
    else if (cnt >= k)
        cout<<0;
    else
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
