#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    ll n, k, b, s;
    cin>>n>>k>>b>>s;

    if (k*b > s){
        cout<<-1;
        return;
    }

    ll lastVal = min(s, (k*b)+k-1);
    if (s-lastVal > (k-1)*(n-1)){
        cout<<-1;
        return;
    }

    vector <ll> ans(n);
    ans[n-1] = lastVal;
    s -= lastVal;

    for (int i = n-2; i > -1; i--){
        if (s == 0)
            ans[i] = 0;
        else if (s <= k-1){
            ans[i] = s;
            s = 0;
        }
        else {
            ans[i] = k-1;
            s -= (k-1);
        }
    }
    
    for (auto x:ans)
        cout<<x<<" ";
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