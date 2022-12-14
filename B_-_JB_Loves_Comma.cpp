#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){
    string s;
    cin>>s;

    for (ll i = 0; i < s.size(); i++){
        cout<<s[i];

        if (i > 1 && s[i] == 'b' && s[i-1] == 'j' && s[i-2] == 'c'){
            cout<<",";
        }
    }
    
    
}
int main()
{
    // int t;
    // while(t--){
        solve();
    // }
    
    return 0;
}