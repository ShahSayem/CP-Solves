#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        long double l, r, a;
        cin>>l>>r>>a;

        long long ans;

        if(a == 1){
            ans = floor(r/a) + (int(r) % int(a));
        }
        else if(a == r || int(r) % int(a) == 0 ){
            r--;
            if(a == r || int(r) % int(a) == 0){
            r--;
            }
            ans = floor(r/a) + (int(r) % int(a));
        }
        else{
            ans = floor(r/a) + (int(r) % int(a));
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}