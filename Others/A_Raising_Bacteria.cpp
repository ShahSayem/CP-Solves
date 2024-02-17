#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, cnt = 0;
    cin>>n;
    
    while (n){
        if (n&1)
            cnt++;
        
        n = n>>1;
    }
    
    cout<<cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
} 
  
