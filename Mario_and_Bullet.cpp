#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        int x, y, z;
        cin>>x>>y>>z;

        int m = y/x;
        if (z-m > 0)
            cout<<z-m<<endl;
        else
            cout<<0<<endl;
    }
    
    return 0;
}
