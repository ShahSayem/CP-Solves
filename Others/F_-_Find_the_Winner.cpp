#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

bool primeChecker (ll n)
{
    if(n==0 || n==1)
        return false;
    for (int i = 2; i*i <= n; i++){
        if (n%i == 0)
            return false;
    }

    return true;
}


void solve()
{
    int n, m;
    cin>>n>>m;

    vector <ll> ans(n, 0);
    while (m--){
        for (int i = 0; i < n; i++){
            ll j;
            cin>>j;
            ans[i] += j;
        }
    }
    
    sort(ans.rbegin(), ans.rend());
    cout<<ans[0];
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    // seive();

    while (t--){
        solve();
        cout<<"\n";
    }


    return 0;
} 
  
