#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;

    if (n < 3){
        for (int i = 1; i <= n; i++){
            cout<<i<<" ";
        }

        return;
    }

    int x = 4;
    cout<<2<<" ";
    for (int i = 1; i < n-1; i++){
        if (i == n/2){
            cout<<1<<" ";
        }
        else {
            cout<<x<<" ";
            x++;
        }
    }
    cout<<3;
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
