#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin>>n;

    ll x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++){
        int xi, yi, zi;
        cin>>xi>>yi>>zi;

        x += xi;
        y += yi;
        z += zi;
    }

    if (x || y || z)
        cout<<"NO";
    else 
        cout<<"YES";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    cout<<"\n";

    return 0;
}