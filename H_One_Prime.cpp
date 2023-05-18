#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n;
    cin>>n;

    if (2>n){
        cout<<"NO";
            return;
    }

    if (n == 2 || n == 3){
        cout<<"YES";
            return;
    }

    if(n%2 == 0){
        cout<<"NO";
            return;
    }

    for (int i = 3; i <= sqrt(n); i += 2){
        if (n%i == 0){
            cout<<"NO";
            return;
        }     
    }
    
    cout<<"YES";
    
}

int main()
{
    // int t;
    // cin>>t;

    // while (t--){
        solve();
        cout<<endl;     
    // }
    
    return 0;
}
    