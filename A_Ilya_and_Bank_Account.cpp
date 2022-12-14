#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    if(n > 0){
        cout<<n<<endl;
    }
    else{
        long long a = n/10;
        long long b = ((n/100)*10)+(n%10);

        long long ans = max(a, b);
        cout<<ans<<endl;
    }

    return 0;
}