#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){

    ll a, b;
    cin>>a>>b;

    if (a == b){
        cout<<0;
        return;
    }

    else if (a < b ){
        if ((a%2 == 0 && b%2 == 0) || (a%2 == 1 && b%2 == 1)){
            cout<<2;
            return;
        }

        else {
            cout<<1;
            return;
        }
    }

    else {
        if ((a%2 == 0 && b%2 == 0) || (a%2 == 1 && b%2 == 1)){
            cout<<1;
            return;
        }

        else{
            cout<<2;
            return;
        }
    }
}
int main()
{
    int t;
    cin>>t;

    while(t--){
        solve();
        cout<<endl;
    }
    
    return 0;
}