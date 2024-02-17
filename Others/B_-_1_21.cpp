#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

void solve()
{
    int z;
    float ans;
    string a, b;
    cin>>a>>b;

    string s = a+b;
    z = stoi(s);
    ans = float(z);
    int x = ans;

    // cout<<ans<<endl;
    if ((sqrt(ans)-floor(sqrt(x))) > 0){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
    
}
int main()
{
    // int t;
    // cin>>t;

    // while (t--){
        solve();
        cout<<endl;     
    
    return 0;
}
    