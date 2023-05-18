#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--){
        long long n;
        cin>>n;

        if (n*0.1 < 100)
            cout<<100<<endl;
        else
            cout<<n*0.1<<endl;
        
    }

    return 0;
}
    