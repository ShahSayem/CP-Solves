#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a, b, c, d, cnt = 0;
    cin>>a>>b>>c>>d;
    
    if (a < b)
        cnt++;
    if (a < c)
        cnt++;
    if (a < d)
        cnt++;

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