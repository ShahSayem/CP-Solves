#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, x1, y1, x2, y2;
    cin>>n>>x1>>y1>>x2>>y2;

    int belt1 = min({x1, y1, n-x1+1, n-y1+1});
    int belt2 = min({x2, y2, n-x2+1, n-y2+1});
    cout<<abs(belt1-belt2);
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
