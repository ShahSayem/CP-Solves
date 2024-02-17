#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;

    while (t--){
        long long n;
        cin>>n;

        int ans = pow(2, n);

        cout<<ans-1<<endl;
    }
   
    return 0;
}