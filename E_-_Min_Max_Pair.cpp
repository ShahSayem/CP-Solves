#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    ll n, cnt = 0, cnt1 = 0;
    cin>>n;

    vector <int> v(n+1);
    for (int i = 1; i <= n; i++){
        cin>>v[i];

        if (v[i] == i)
            cnt++;
    }

    for (int i = 1; i <= n; i++){
        if (v[v[i]] == i)
            cnt1++;
    }

    cnt1 -= cnt;
    cnt = (cnt*(cnt-1))/2;

    cout<<cnt1/2 + cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }
    return 0;
}
