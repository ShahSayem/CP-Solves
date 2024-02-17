#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    int n, k, cnt = 2, ans = 0;
    cin>>n>>k;

    for (int i = 1; i <= n/2; i++){
        if (i%k == 0)
            cnt++;

        ans = max({cnt, ans});
    }
    
    // cout<<ans;

    cout<<(n/k) + n%k;
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
