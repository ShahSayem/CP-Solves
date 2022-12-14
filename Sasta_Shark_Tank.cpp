#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b;
    cin>>a>>b; 

    if (a*10 > b*5)
        cout<<"FIRST";
    else if (a*10 == b*5)
        cout<<"ANY";
    else
        cout<<"SECOND";
}
int main()
{
    int t;
    cin>>t;

    while (t--){
        solve();
        cout<<endl;     
    }
    
    return 0;
}
    