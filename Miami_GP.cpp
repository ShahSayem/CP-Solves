#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    double a, b;
    cin>>a>>b;

    if (a*1.07 >= b)
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
