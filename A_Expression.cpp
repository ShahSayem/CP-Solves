#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, b, c, mx = 0;
    cin>>a>>b>>c;

    if ((a+b)*c > mx)
        mx = (a+b)*c;
    if ((b+c)*a > mx)
        mx = (b+c)*a;
    if (a*b*c > mx)
        mx = a*b*c;
    if (a+b+c > mx)
        mx = a+b+c;
        
    cout<<mx;
  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
    // }

    cout<<"\n";

    return 0;
}