#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, m, k, ans = 0;
    cin>>n>>m>>k;

    if (k > 3){
        ans = 0;
    }
    else if (k == 1){
        ans = 1;
    }
    else if (k == 2){
        ans = m/n;
        ans += min(n-1, m);
    }
    else { //k == 3
        ans = m/n;
        ans += min(n-1, m);
        ans = m-ans;
    }

    cout<<ans;
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
