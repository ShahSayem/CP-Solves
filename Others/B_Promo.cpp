#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n, q, len;
	cin>>n>>q;

    int p[n], x, y;
    ll prefixSum[n];
    for(int i = 0; i < n; i++){
        cin>>p[i];
    }

    sort(p, p+n);
    reverse(p, p+n);

    prefixSum[0] = p[0];
    for(int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i-1]+p[i];
    }

    while (q--){
        cin>>x>>y;
        
        ll ans = prefixSum[x-1]-prefixSum[x-y-1];

        if (x==y)
            ans = prefixSum[x-1];
        
        cout<<ans<<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
} 
  
