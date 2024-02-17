#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--){
        long long x, y, ans;
        ans = 0;
        cin>>x>>y;

        if(x < y){
            while (x < y){
                ans++;
                x += 2;
                y += 1;
            }
        }
        else{
            while (x > y){
                ans++;
                x -= 2;
                y -= 1;
            }
        }

    cout<<ans<<endl; 
    }

    return 0;
}
    