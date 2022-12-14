#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, ans = 0, x;
    cin>>n;

    for (int i = 9, j = 0; n != 0; i--, j++){
        if (i < n)
            x = i;
        else 
            x = n;
        n = n-x;
        ans = ans + (x*pow(10, j));
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
  
