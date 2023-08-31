#include <bits/stdc++.h>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 1e7+5;


void solve()
{
    int m, k, a1, ak, ans = 0;
    cin>>m>>k>>a1>>ak;

    m -= k*min(m/k, ak);
    if (a1 >= m){
        cout<<0;
        return;
    }

    m -= a1;
    ans = m/k;
    m %= k;

    //cout<<m<<" "<<a1<<" "<<k;

    if (m && m+a1 >= k)
        ans++;
    else 
        ans += m;

    cout<<ans;
}
 
int main()
{
    Shah_Sayem
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}