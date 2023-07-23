#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc = 1, d, k, x, ans;
    cin>>tc;
    while (tc--){
        ans = 0;
        cin>>d>>k;
        while (d--){
            cin>>x;

            if (x > k)
                ans += (x-k);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
