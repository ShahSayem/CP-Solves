#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;


void solve()
{
    double a, b, n, x, y, v, ans = MAX, time;
    cin>>a>>b;

    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>x>>y>>v;

        time = sqrtl((a-x)*(a-x) + (b-y)*(b-y))/v;
        
        ans = min(time*1.0, ans);
    }
    
    cout<<fixed<<setprecision(20)<<ans;
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
