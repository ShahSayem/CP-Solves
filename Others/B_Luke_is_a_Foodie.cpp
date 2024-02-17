#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x, v = INT_MAX;
    cin>>n>>x;

    vector <int> a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    
    int mn = a[0], mx = a[0], ans = 0;

    for (int i = 0; i < n; i++){
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);

        if (mx-x > mn+x){
            ans++;
            mn = mx = a[i];
        }
    }
    
    cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
} 
  
