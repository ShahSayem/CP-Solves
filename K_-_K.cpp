#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    string s;
    cin>>s;

    int cnt = 1, i;
    for (i = 0; i < s.size()-1; i++){
        if (s[i] == s[i+1]){
            cnt++;
        }
        else{
            cout<<s[i]<<cnt;
            cnt = 1;
        }
    }
    cout<<s[i]<<cnt;
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
  
