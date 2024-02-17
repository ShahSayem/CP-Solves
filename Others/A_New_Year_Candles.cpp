#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, b, ans;
    cin>>a>>b;

    ans = a;
    while (a >= b){
        ans += (a/b);
        a = (a/b) + (a%b);
    }
    
    cout<<ans;
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