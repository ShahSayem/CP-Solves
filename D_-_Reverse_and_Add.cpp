#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--){
        long long a;
        cin>>a;

        int ans = 0;
        while (a != 0){
            int n = a%10;
            ans = (ans*10) + n;
            a /= 10;
        }
    cout<<ans<<endl;
    }
     
    return 0;
}