#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin>>s;

    int check = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] <= 'Z')
            check++;
    }

    if (check == s.size() || (s[0] >= 'a' && check == s.size()-1)){
       for (int i = 0; i < s.size(); i++){
            if (s[i] >= 'a'){
                char c = s[i]-32;
                cout<<c;
            }
            else {
                char c = s[i]+32;
                cout<<c;
            }     
        } 
    }

    else
        cout<<s; 
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