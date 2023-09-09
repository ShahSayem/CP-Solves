#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;


int main()
{
    Shah_Sayem

    int n;
    cin>>n;

    vector <ll> v(n);
    vector <ll> preSum(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    preSum[0] = v[0];
    for (int i = 1; i < n; i++){
        preSum[i] = (preSum[i-1]%MOD + v[i]%MOD) %MOD; 
    }

    ll ans = 0, curr;
    for (int i = 0; i < n-1; i++){
        curr = preSum[n-1]-preSum[i];
        ans = (ans + (v[i]%MOD * curr%MOD)%MOD + MOD)%MOD;
    }

    cout<<ans<<"\n";

    return 0;
}
