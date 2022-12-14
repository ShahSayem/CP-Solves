#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin>>s;

    int cnt = 0, ans = 0;

    map <char, bool> mp;
    for (int i = 0; i < s.size(); i++){
        if (!mp[s[i]]){
            cnt++;
            mp[s[i]] = true;
        }

        if ((!mp[s[i+1]] && i != s.size()-1) &&cnt == 3){
            mp.clear();
            ans++;
            cnt = 0;
        }
    }

    if (cnt != 0)
        ans++;

    cout<<ans;
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
  
