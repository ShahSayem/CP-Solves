#include <bits/stdc++.h>
using namespace std;

void solve()
{
    double n;
    cin>>n; 

    if (sqrt(n) == ceil(sqrt(n)))
        cout<<"YES";
    else 
        cout<<"NO";  
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
    