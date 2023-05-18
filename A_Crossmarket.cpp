#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n, m;
    cin>>n>>m;

    if (n == 1 && m == 1){
        cout<<0;
        return;
    }

    int ans = n+m-2;
    ans += min(n, m);
    cout<<ans;
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