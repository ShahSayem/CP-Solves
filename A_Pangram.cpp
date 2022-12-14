#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){

    int n;
    cin>>n;
    string s;
    cin>>s;

    for (int i = 0; i < s.size(); i++){
        if (s[i]<'a'){
            s[i] = s[i]+32;
        }
    }

    set <char> ss;
    for (int i = 0; i < s.size(); i++){
        ss.insert(s[i]);
    }

    if (ss.size()<26)
        cout<<"NO"; 
    else
        cout<<"YES"; 
    
}

int main()
{
    // int t;
    // cin>>t;
    // while(t--){
        solve();
        cout<<endl;
    // }
    
    return 0;
}