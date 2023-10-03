#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll n, k, x, left;
    cin>>n>>k>>x;

    ll minSum = (k*(k+1))/2LL;

    left = n-k;
    ll maxSum = ((n*(n+1))/2LL) - ((left*(left+1))/2LL);

    if (minSum > x || maxSum < x){
        cout<<"NO";
    }
    else {
        cout<<"YES";
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
