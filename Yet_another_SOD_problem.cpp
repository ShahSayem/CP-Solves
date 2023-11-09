#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll l, r, temp, sum, check = 0;
    cin>>l>>r;

    for (ll i = l; i <= r; i++){
        temp = i, sum = 0;
        while (temp){
            sum += (temp%10);
            temp /= 10;
        }
        
        if (sum%3 == 0){
            l = i;
            check = 1;
            break;
        }
    }

    for (ll i = r; i >= l; i--){
        temp = i, sum = 0;
        while (temp){
            sum += (temp%10);
            temp /= 10;
        }
        
        if (sum%3 == 0){
            r = i;
            check = 1;
            break;
        }
    }
    
    if (!check){
        cout<<0;
    }
    else
        cout<<(r-l+3LL)/3LL;
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
