#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n, x, s, a, b, ans;
    cin>>n>>x>>s;
    ans = x;

    while (s--){
        cin>>a>>b;

        if (a == x || b == x){
            if (a == x)
                ans = b;
            else 
                ans = a;

            x = ans;
        }
    }
    
    cout<<ans;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
