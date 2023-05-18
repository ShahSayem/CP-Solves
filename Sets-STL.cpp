#include <bits/stdc++.h>
#define ll long long
using namespace std;

set <int> s;

void solve(){

    int y, x;
    cin>>y>>x;
    if (y == 1)
        s.insert(x);
    else if (y == 2){
        s.erase(x);
    }    
    else{
        auto z = s.find(x);

        if (z != s.end())
            cout<<"Yes\n";
        else
            cout<<"No\n";
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