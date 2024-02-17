#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    cin>>n;

    int gcd = 0;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        gcd = __gcd(v[i], gcd);
    }

    if (gcd > 1){
        cout<<0;
        return;
    }
    else if (n == 1){
        cout<<1;
        return;
    }
    sort(v.begin(), v.end());

    gcd = 0;
    for (int i = 1; i < n; i++){
        gcd = __gcd(v[i]-v[i-1], gcd);
    }

    if (gcd == 1){
        cout<<-1;
        return;
    }
    else if (gcd == 0){
        cout<<1;
        return;
    }

    int ans = INT_MAX, nxt;
    for (int i = 1; i*i <= gcd; i++){
        if (gcd%i)
            continue;

        nxt = ((v[0]+i-1)/i)*i*1LL;

        if (i > 1)
            ans = min(ans, nxt-v[0]);

        int j = gcd/i;
        nxt = ((v[0]+j-1)/j)*j*1LL;

        if (j > 1)
            ans = min(ans, nxt-v[0]);
    }
    
    cout<<ans;
}

int main()
{
    Shah_Sayem

    int tc = 1, x = 1;
    cin>>tc;
    while (tc--){
        cout<<"Case "<<x<<": ";
        solve();
        cout<<"\n";
        x++;
    }

    return 0;
}
