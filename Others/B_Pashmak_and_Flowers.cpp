#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    ll diff = v[n-1]-v[0], cntMn = 0, cntMx = 0, mid = (n+1)/2;;
    for (int i = 0; i < n; i++){
        if (v[i] == v[0])
            cntMn++;
        else if (v[i] == v[n-1])
            cntMx++;
    }
    
    ll ans = cntMn * cntMx;

    if (v[0] == v[n-1]){
        ans = 0;
        for (int i = 0; i < n; i++){
            ans += i;
        }  
    }
        
    cout<<diff<<" "<<ans;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
