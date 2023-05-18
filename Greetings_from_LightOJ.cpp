#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){
    int a, b;
    cin>>a>>b;

    cout<<a+b;

}

int main()
{
    int t;
    cin>>t;
    int i = 0;
    while(t--){
        i++;
        cout<<"Case "<<i<<": ";
        solve();
        cout<<endl;
    }
    
    return 0;
}