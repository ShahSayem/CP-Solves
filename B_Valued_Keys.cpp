#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;


void solve()
{
    string x, z, ans = "";
    cin>>x>>z;

    int n = x.size();
    for (int i = 0; i < n; i++){
        if (x[i] < z[i]){
            cout<<-1;
            return;
        }
    }
    
    ans = z;
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
