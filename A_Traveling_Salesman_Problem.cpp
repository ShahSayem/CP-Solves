#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve(){
    ll n, x, y;
    cin>>n;

    ll x1 = 0, x2 = 0, y1 = 0, y2 = 0;
     
    while (n--){
        cin>>x>>y;

        x1 = min(x1, x);
        x2 = max(x2, x);
        y1 = min(y1, y);
        y2 = max(y2, y);
    }

    ll sum = abs(x1)+x2+abs(y1)+y2;
    cout<<2*sum;
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
  
