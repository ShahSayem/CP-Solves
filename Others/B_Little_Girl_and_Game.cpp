#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    string s;
    cin>>s;

    int n = s.size();
    map <char, int> mp;
    for (int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    
    int odd = 0;
    for (auto it : mp){
        if (it.second & 1)
            odd++;
    }

    if ((odd & 1) || (odd == 0))
        cout<<"First";
    else 
        cout<<"Second";
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
