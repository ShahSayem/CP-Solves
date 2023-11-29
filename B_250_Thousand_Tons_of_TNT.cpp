#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    ll mx = 0, mn = 1e18, ans = 0, n;
    cin>>n;

    vector <ll> v(n), divisors;
    vector <ll> preSum(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        mx = max(v[i], mx);
        mn = min(v[i], mn);
    }
    
    if (n == 1){
        cout<<0;
        return;
    }

    ans = mx-mn;
    //cout<<ans<<" ";

    preSum[0] = v[0];
    for (int i = 1; i < n; i++){
        preSum[i] = v[i] + preSum[i-1];
    }

    for (int i = 2; i*i <= n; i++){
        if (n % i == 0){
            if ((n/i) == i){
                divisors.push_back(i);
            }
            else {
                divisors.push_back(i);
                divisors.push_back(n/i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    
    ll curr, temp = 0;
    for (int i = 0; i < divisors.size(); i++){
        curr = divisors[i];
        mx = 0, mn = 1e18;

        ll before = 0;
        for (int j = curr-1; j < n; j+=curr){
            if (j == curr-1){
                mx = preSum[j];
                mn = preSum[j];
            }  
            else {
                before = j-curr;
                mx = max(preSum[j]-preSum[before], mx);
                mn = min(preSum[j]-preSum[before], mn);
            }  
        }
        temp = mx-mn;
        
        //cout<<temp<<" ";
        ans = max(temp, ans);
    }
    
    // for (auto it : divisors){
    //     cout<<it<<" ";
    // }
    
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
