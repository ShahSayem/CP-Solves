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

    int gcd;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (!i){
            gcd = v[i];//v[0]
        }
        else {
            gcd = __gcd(v[i], gcd);
        }
    }

    if (gcd > 1){
        cout<<0;
    }

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
