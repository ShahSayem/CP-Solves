#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, a, b, mx = 0;
    cin>>n;

    ll p = 0;
    for (int i = 0; i < n; i++){
        cin>>a>>b;

        p += (min(a, b)*2);

        mx = max({mx, a, b});
    }
    p += mx*2;

    cout<<p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
