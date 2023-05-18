#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    int n;
    cin>>n;

    ll sum = 0, price, j;
    // vector <ll> a(n);
    for (int i = 0; i < n; i++){
        cin>>j;
        sum += j;
    }

    ll k, d;
    cin>>k;
    cin>>d;

    price = sum*d;

    if ((k-price) > -1)
        cout<<0;
    else {
        cout<<price-k;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, x = 0;
    cin>>t;

    while (t--){
        x++;
        cout<<"Case "<<x<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
} 
  
