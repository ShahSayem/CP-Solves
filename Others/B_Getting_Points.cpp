#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

ll n, p, l, t, week, mid;

bool isValid()
{
    ll ans = mid*l + (min(mid*2, week) * t);

    if (ans >= p)
        return true;
    
    return false;
}

ll mnDay()
{
    ll low = 1, high = n;
    while (low < high){
        mid = (low+high) / 2;
        if (isValid()){
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }
    
    return low;
}

void solve()
{
    cin>>n>>p>>l>>t;
    
    week = (n+6) / 7;

    cout<<n-mnDay();
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
