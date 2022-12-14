#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    ll n, x;
    cin>>n>>x;

    ll low = 1, high = n, mid, cnt = 0;

    while (low < high){
        cnt++;
        mid = (low + high)/2;

        if (x > mid){
            low = mid+1;
        }
        else {
            high = mid;
        }
    }
    
    cout<<cnt;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
} 
  
