#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, mx1 = 2e5, mx2 = 2e5, ans = 0, x;
    cin>>n;

    for (int i = 0; i < n; i++){
        cin>>x;

        if (x <= mx1)
            mx1 = x;
        else if (x <= mx2)
            mx2 = x;
        else { // x > (mx1, mx2)
            mx1 = x;
            ans++;

            if (mx1 > mx2)
                swap(mx1, mx2);
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
