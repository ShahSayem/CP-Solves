#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n, k;
    cin>>n>>k;

    if (n == k)
        cout<<1;

    else if (n == 1)
        cout<<k;

    else if (n<k){
        int a = k/n, b = k%n;
        if (b > 0)
            a++;
        cout<<a;
    }
    
    else {
        int c = n/k, d = n%k;
        if (d > 0)
            c++;
        k *= c;

        int a = k/n, b = k%n;
        if (b > 0)
            a++;
        cout<<a;       
    }
    
}

int main()
{
    int t;
    cin>>t;

    while (t--){
        solve();
        cout<<"\n";     
    }
    
    return 0;
}
    