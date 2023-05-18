#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    ll n, a, b, z, ans = 0;
    cin>>n;

    while (n--){
        cin>>a>>b;

        if ((a > 0 && b > 0) || (a < 0 && b < 0)){
            z = abs(abs(a)-abs(b));
        }
        else {
            z = abs(a)+abs(b);
        }
        ans = max(ans, z);
    }
    
    cout<<ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, x = 0;
    cin>>t;

    while (t--){
        x++;
        cout<<"Case "<<x<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
} 
  
