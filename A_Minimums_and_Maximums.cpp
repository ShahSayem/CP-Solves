#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){
    vector <string> v1;
    vector <string> v2;

    ll l1, r1, l2, r2;
    cin>>l1>>r1>>l2>>r2;

    if (l1 >= l2 && l1 <= r2)
        cout<<l1;
    else if (l2 >= l1 && l2 <= r1)
        cout<<l2;
    else
        cout<<l1+l2;
    
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