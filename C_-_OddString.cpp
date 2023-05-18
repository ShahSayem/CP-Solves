#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    for (int i = 0; i < s.size(); i += 2){
        cout<<s[i];
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
    