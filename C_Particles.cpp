#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;


void solve()
{
    ll n, x;
    cin>>n;
    ll oddSum = 0, evenSum = 0, ans, mx = INT_MIN;
    for (int i = 0; i < n; i++){
        cin>>x;

        if (i%2){
            if (x > 0)
                oddSum += x;
        }    
        else {
            if (x > 0)
                evenSum += x;
        }  

        mx = max(x, mx);
    }
    
    ans = max(oddSum, evenSum);

    if (!ans)
        ans = mx;
    
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
