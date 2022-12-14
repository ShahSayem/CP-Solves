#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string t, p;
    cin>>t>>p;

    for (int i = 0; i+p.size() <= t.size(); i++){ 
        if (t.substr(i, p.size()) == p){
            cout<<i<<"\n";
        }
    }
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

    return 0;
} 
  


  
