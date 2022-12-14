#include <bits/stdc++.h>
using namespace std;

const int MOD = 10;

int bigMod(int a, int b)
{
    if (b == 0)
        return 1;
    else if (b%2){
        int x = a%MOD;
        int y = (bigMod(a, b-1))%MOD;

        return (x*y)%MOD;
    }
    else {
        int x = (bigMod(a, b/2))%MOD;

        return (x*x)%MOD;
    }
}

void solve()
{
    int a, b;
    cin>>a>>b;

    cout<<bigMod(a, b);
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
