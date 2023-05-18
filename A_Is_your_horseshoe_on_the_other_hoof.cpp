#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){

    set <int> s;
    int i = 4, x;
    while (i--){
        cin>>x;
        s.insert(x);
    }
    
    cout<<4-s.size();
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
    //}

    return 0;
}