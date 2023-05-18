#include <bits/stdc++.h>
#define ll long long
using namespace std;

map <string, int> mp;

void solve(){

    int y, x;
    string s;
    cin>>y;
    if (y == 1){
        cin>>s>>x;

        mp[s] += x;
    }
    else if (y == 2){
        cin>>s;
        mp.erase(s);
    }    
    else{
        cin>>s;
        cout<<mp[s]<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        solve();
    }

    return 0;
}