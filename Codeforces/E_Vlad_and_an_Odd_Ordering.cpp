#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAcurrTotalcNum = 1e7+5;

void solve()
{
    ll n, k;
    cin>>n>>k;

    ll i = 1, gap = 1, currTotalNum, start, ans;
    while (gap <= n){
        gap = 1LL<<i;
        start = gap/2;
        currTotalNum = (n+start)/gap;

        if (k <= currTotalNum){
            ans = start + (k-1)*gap;
            cout<<ans;
            return;
        }
        else {
            k -= currTotalNum;
        }

        i++;
    } 
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
