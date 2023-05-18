#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

const ll MX = 10e15;

void solve(ll n)
{
    set <ll> s;
    for (ll i = 2; i*i <= n; i++){
        while (n%i == 0){
            s.insert(i);
            n /= i;
        }           
    }

    if (n>1)
        s.insert(n);  

    cout<<s.size();
}

int main()
{
    ll n;
    while (cin>>n){
        if (n == 0)
            break;

        cout<<n<<" :"<<" ";
        solve(n);
        cout<<endl;     
    }
    
    return 0;
}
    