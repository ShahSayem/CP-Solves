#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll x1, y1, x2, y2, m;
    cin>>x1>>y1>>x2>>y2;
    cin>>m;
    while (m--){
        ll x, y;
        cin>>x>>y;

        if ((x > x1 && x < x2) && (y > y1 && y < y2))
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
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<":\n";
        solve();
    }

    return 0;
}