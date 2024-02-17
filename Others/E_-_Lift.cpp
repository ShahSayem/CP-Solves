#include <bits/stdc++.h>
#define ll long long;
using namespace std;

void solve(){
    int me, lift;
    cin>>me>>lift;

    long long ans;
    ans = (abs(lift-me)*4)+(2*3)+(5*3)+(me*4);
    cout<<ans-2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }
  
    return 0;
}