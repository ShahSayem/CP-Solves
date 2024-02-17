#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;


void solve()
{
    int n, m;
    cin>>n>>m;

    string s;
    cin>>s;

    int idx = 0;
    map <char, char> mp;
    for (int i = 33; i <= 126; i++){
        mp[i] = i; 
    }

    char a, b;
    for (int i = 0; i < m; i++){
        cin>>a>>b;

        for (auto &it : mp){
            if (it.second == a)
                it.second = b;  
            else if (it.second == b)
                it.second = a;
        }
    }

    for (int i = 0; i < n; i++){
        cout<<mp[s[i]];
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    // cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
