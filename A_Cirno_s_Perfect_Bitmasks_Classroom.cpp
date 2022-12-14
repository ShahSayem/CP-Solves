#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    int x = n;

    if (n == 1) 
        cout<<3;

    else if (n%2)
        cout<<1;

    else{
        int ans = 1;
        for (int i = 0; i < 31; i++){
            if (n&1 == 1){
                ans = pow(2, i);
                break;
            }
            else{
                ans = pow(2, i);
            }
            n = n>>1;
        }
        if (ans == x)
            ans++;
        
        cout<<ans;
    }   
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