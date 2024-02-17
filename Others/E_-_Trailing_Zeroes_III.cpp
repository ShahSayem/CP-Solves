#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    ll l = 0, r = 1e18, ans = -1, mid, trailZero;
    while (l <= r){
        mid = l+(r-l)/2;

        trailZero = 0;
        for (ll i = 5; i <= mid; i *= 5){
            trailZero += mid/i;
        }
        
        if (trailZero > n)
            r = mid-1;
        else if (trailZero < n)
            l = mid+1;
        else{
            ans = mid;
            r = mid-1;
        }
    }
    
    if (ans == -1)
        cout<<"impossible";
    else
        cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
} 
  
