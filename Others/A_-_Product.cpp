#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

void solve()
{
    int n, a, b;
    cin>>a>>b;

    if ((a*b)%2 == 0){
        cout<<"Even";
    }   
    else{
        cout<<"Odd";
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
    