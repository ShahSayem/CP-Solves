#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int cnt = 0;
    map <char, bool> mp;
    for (int i = 0; i < n; i++){
        if (!mp[s[i]]){
            cnt += 2;
            mp[s[i]] = true;
        }
        else
            cnt++;
    }

    cout<<cnt;
    
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
  
