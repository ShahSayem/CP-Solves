#include <bits/stdc++.h>
#define ll long long;
using namespace std;

void solve(){
    double r, ans, a, b;
    cin>>r;

    a = (r*2)*(r*2);
    b = (3.14159265359*r*r);
    ans = a-b+(10e-9);
    printf("%0.2lf", ans);

}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}