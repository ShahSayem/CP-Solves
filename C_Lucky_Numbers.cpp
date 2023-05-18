#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, ans, i;
    ans = 0;
    cin>>n; 

    for(i = 1; i <= n; i++){
        ans += pow(2, i);
    }
    
    cout<<ans<<endl;

    return 0;
}