#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    string s;
    vector <string> v;
    map <string, bool> mp;
    for (int i = 0; i < n; i++){
        cin>>s;
        mp[s] = true;
        v.push_back(s);
    }

    string ans, x, y;
    bool check;
    for (int i = 0; i < n; i++){
        check = false;
        for (int j = 1; j < v[i].size(); j++){
            x = v[i].substr(0, j);
            y = v[i].substr(j, v[i].size());

            if (mp[x] && mp[y]){
                check = true;
                break;
            }
        }
        if (check)
            ans += '1';
        else
            ans += '0';
    }
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
  
