#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;



void solve()
{
    int n, mx = 0;
    cin>>n;

    vector <int> v(n);
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        mp[v[i]]++;
        mx = max(mp[v[i]], mx);
    }
    
    if (mx == n){
        cout<<n;
    }
    else if (mx <= n/2){
        if (n%2){
            cout<<1;
        }
        else {
            cout<<0;
        }
    }
    else {
        cout<<(mx- (n-mx));
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
