#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    char c;
    set <char> s;
    while (cin>>c){
        if (c >= 'A' && c <= 'z')
            s.insert(c);
    }

    cout<<s.size();
    
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
  
