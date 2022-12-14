#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n; 

    for (int i = 1; i < n+1; i++){
        if (n%i == 0){
            cout<<i<<" ";
        }
    }
    
    
}
int main()
{
    int t, count ;
    count = 0;
    cin>>t;

    while (t--){
        count++;
        cout<<"Case "<<count<<": ";
        solve();
        cout<<endl;     
    }
    
    return 0;
}
    