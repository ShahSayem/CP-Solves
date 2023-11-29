#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;

void solve()
{
    int n;
    cin>>n;

    ll dist, time;
    vector <int> t(n), x(n), y(n);
    for (int i = 0; i < n; i++){
        cin>>t[i]>>x[i]>>y[i];

        if (i){
            dist = abs(x[i]-x[i-1]) + abs(y[i]-y[i-1]);
            time = t[i]-t[i-1];
        }
        else {
            dist = x[i] + y[i];
            time = t[i];
        }

        if (dist > time || ((time-dist) & 1)){
            cout<<"No";
            return;
        }
    }

    cout<<"Yes";
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
