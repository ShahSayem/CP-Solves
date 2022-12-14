#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){

    ll  a, b;
    cin>>a>>b;

    if (b == 1)
        cout<<"NO";
    else{
        cout<<"YES"<<endl;
        cout<<a*b<<" "<<a<<" "<<(b+1)*a;
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