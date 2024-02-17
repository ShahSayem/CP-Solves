#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){
    ll n, mn, mx;
    cin>>n;

    if (n%2 || n<4){
        cout<<-1;
        return;
    }
    else if (n%6 == 0){
        mn = n/6;
    }
    else if (n%6 == 4 || n%6 == 2){
        mn = (n/6)+1;
    }

    mx = n/4;

    cout<<mn<<" "<<mx;
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