#include <bits/stdc++.h>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, idx;
    cin>>n;

    vector <ll> v(n), preSum(n), sufSum(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
 
    preSum[0] = v[0];
    for (int i = 1; i < n; i++){
        preSum[i] = preSum[i-1] + v[i];
    }

    sufSum[n-1] = v[n-1];
    for (int i = n-2; i >= 0; i--){
        sufSum[i] = sufSum[i+1] + v[i];
    }

    ll sum = 1e12;
    for (int i = 0; i < n; i++){
        if (preSum[i]+sufSum[i] < sum){
            idx = i;

            sum = preSum[i]+sufSum[i];
        }

        //cout<<preSum[i]<<" "<<sufSum[i]<<"\n";
    }

    cout<<idx+1;
}
 
int main()
{
    Shah_Sayem
    // #ifndef ONLINE_JUDGE
    //     freopen("Input.txt", "r", stdin);
    //     freopen("Output.txt", "w", stdout);
    // #endif

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}