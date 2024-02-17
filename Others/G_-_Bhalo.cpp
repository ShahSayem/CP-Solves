#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll m, n, cnt = 0;
    cin>>m>>n;

    ll GCD = __gcd(m, n);
    for (ll i = 1; i*i <= GCD; i++){
        if (GCD%i == 0){
            if (GCD/i == i)
                cnt++;
            else 
                cnt += 2; 
        }
    }
    
    cout<<cnt;
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
  
