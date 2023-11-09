#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int x, k;
    cin>>x>>k;

    ll temp, sum;
    
    for (ll i = x; ; i++){
        temp = i, sum = 0;
        while (temp){
            sum += (temp%10);
            temp /= 10;
        }
        
        if (sum%k == 0){
            cout<<i;
            return;
        }
    } 
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
