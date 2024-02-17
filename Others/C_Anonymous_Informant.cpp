#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, k, last;
    cin>>n>>k;

    last = n-1;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    k = min(k, n);
    while (k--){
        if (v[last] > n){
            cout<<"No";
            return;
        }

      //last = last - shift
        last -= v[last];
        if (last < 0)
            last += n;
    }

    cout<<"Yes";
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
