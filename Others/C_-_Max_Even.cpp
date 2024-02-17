#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    ll n, x;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.rbegin(), v.rend());
    
    for (int i = 0; i < n-1; i++){
        x = v[i]+v[i+1];
        if (!(x%2)){
            cout<<x;
            return;
        }
    }
    cout<<-1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while (t--){
        solve();
    //     cout<<"\n";
    // }

    return 0;
}
