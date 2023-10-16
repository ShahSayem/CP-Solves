#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    ll n;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    ll ans = (n*(n+1))/2LL;
    ll curr = v[0], cnt = 1;
    for (int i = 1; i < n; i++){
        if (curr == v[i]){
            cnt++;
        }
        else {
            ans -= ((cnt*(cnt+1)) / 2LL);
            cnt = 1;
            curr = v[i];
        }
    }
    
    ans -= ((cnt*(cnt+1)) / 2LL);
    cout<<ans;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
