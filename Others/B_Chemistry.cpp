#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, k, len;
    cin>>n>>k;

    len = n-k;
    string s;
    cin>>s;

    map <char, int> mp;
    for (int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    
    int odd = 0, even = 0;
    for (auto it : mp){
        if (it.second & 1){
            odd++;
        }
        else{ 
            even++;
        }
    }

    if (odd <= k+1){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
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
