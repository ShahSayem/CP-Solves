#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, h0, a, c, q;
    cin>>n>>h0>>a>>c>>q;

    vector <ll> height(n, h0);
    //cout<<height[0]<<" ";
    for (int i = 1; i < n; i++){
        height[i] = (((a%q) * (height[i-1]%q)) + (c%q)) % q;

        //cout<<height[i]<<" ";
    }
    
    ll cnt, curr, ans = 0;
    for (int i = 1; i < n; i++){
        curr = height[i], cnt = 0;
        for (int j = i-1; j >= 0; j--){
            if (curr <= height[j] || j == i-1){
                curr = max(height[j], curr);
                cnt++;
            }
        }

        ans += cnt;
    }

    cout<<ans;
}

int main()
{
    Shah_Sayem

    int tc = 1;
   // cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
