#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    if (a+c == b+d) 
        cout<<"YES";
    else 
        cout<<"NO";
}

int main()
{
    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
