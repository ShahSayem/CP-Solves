#include <bits/stdc++.h>
#define ll long long;
using namespace std;

void solve(){
    int n;
    cin>>n;

    if (n < 11)
        cout<<0<<" "<<n;
    else    
        cout<<n-10<<" "<<10;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }
  
    return 0;
}