#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    ll ans = 0;
    bool zero = true;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (zero && v[i] > 0)
            zero = false; 

        if (!zero){
            if (i != n-1){
                if (v[i])
                    ans += v[i];
                else
                    ans ++;
            }
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
  
