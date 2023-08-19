#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;


int main()
{
    Shah_Sayem

    int n, a, b;
    cin>>n>>a>>b;

    ll ans = 0, costCont, costJump, distance;
    vector <int> coordinate(n);
    for (int i = 0; i < n; i++){
        cin>>coordinate[i];
    }

    for (int i = 1; i < n; i++){
        distance = coordinate[i] - coordinate[i-1];
        costCont = distance*a*1LL;
        costJump = b;

        ans += min(costCont, costJump);
    }
    
    cout<<ans<<"\n";

    return 0;
}
