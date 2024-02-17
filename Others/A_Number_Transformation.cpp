#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll x, y, mul = 1;
    cin>>x>>y;

    for (int b = 1; b <= y; b++){
        for (int a = 1; a <= y; a++){
            mul = b*a;
            if ((x*mul) == y){
                cout<<b<<" "<<a;
                return;
                if(b == 1){
                    break;
                }
            }  
        }  
    }
    
    cout<<0<<" "<<0;
    
}

int main()
{
    int t;
    cin>>t;

    while (t--){
        solve();
        cout<<endl;     
    }
    
    return 0;
}
    