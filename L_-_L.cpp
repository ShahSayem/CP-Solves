#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
    int n;
    cin>>n;

    int a[n], mx = -1, ans = 0, i;
    for (i = 0; i < n; i++){
        cin>>a[i];
        if (a[i]>mx){
            mx = a[i];
            ans = i;
        }
        else if (mx == a[i]){
            ans = -2;
        }
    }
    
    cout<<ans+1;
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
  
