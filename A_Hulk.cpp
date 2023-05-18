#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){

    ll a;
    cin>>a;

    for (int i = 0; i < a; i++){
        if (i%2 == 0)
            cout<<"I hate ";
        else
            cout<<"I love ";

        if (i != a-1)
            cout<<"that ";
        else
            cout<<"it ";
    }
    

}

int main()
{
    // int t;
    // cin>>t;

    // while(t--){
        solve();
        cout<<endl;
    // }
    
    return 0;
}