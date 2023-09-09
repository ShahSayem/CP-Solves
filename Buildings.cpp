#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    int n, k;
    cin>>n>>k;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    if (n == 1){
        cout<<v[0]+k;
        return;
    }

    ll ans = v[0];
    for (int i = 1; i < n; i++){
        if (k >= i){
            ans = v[i];
            k -= i;
        }    
    }

    cout<<ans;
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
