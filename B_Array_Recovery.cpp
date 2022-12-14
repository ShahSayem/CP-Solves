#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n;
    cin>>n;

    vector <int> v(n), d(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (i)
            d[i] = v[i]+d[i-1];
        else{
            d[i] = v[i];
        }
    }
    
    for (int i = 1; i < n; i++){
        int x = d[i-1]-v[i];

        if (x > -1 && v[i] != 0){
            cout<<-1;
            return;
        }
    }

    for (int i = 0; i < n; i++){
        cout<<d[i]<<" ";
    }
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
