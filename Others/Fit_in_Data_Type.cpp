#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n, x;
        cin>>n>>x;

        if (n >= x){
            cout<<x<<endl;
        }
        else{
            int ans = x%(n+1);
            cout<<ans<<endl;
        }
    }

    return 0;
}