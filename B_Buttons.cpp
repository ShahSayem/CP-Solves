#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n;
    cin>>n;

    ll sum = n;   
    for (int i = 1; i < n; i++){
        sum += (n-i)*i;
    }

    cout<<sum;      
}

int main()
{
        solve();
        cout<<"\n";     
    
    return 0;
}
    