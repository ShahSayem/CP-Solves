#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    ll n, x, y, divX, divY, divXY, leftX;
    cin>>n>>x>>y;

    divX = n/x, divY = n/y, divXY = n/((x*y)/__gcd(x, y));
    divX -= divXY, divY -= divXY;
    ll sumX = 0, sumY = 0;
    
    sumY = (divY*(divY+1))/2LL;
    leftX = n-divX;
    sumX = ((n*(n+1))/2LL) - ((leftX*(leftX+1))/2LL);
    cout<<sumX-sumY;
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
