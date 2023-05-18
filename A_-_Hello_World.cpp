#include <bits/stdc++.h>
#define ll long long
using namespace std;

map <string, int> mp;

void solve(){

    map <string, string> mp;
    mp["Hello"] = " World";

    cout<<mp.begin()->first<<mp["Hello"];
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