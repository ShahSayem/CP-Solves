#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;

    long long fact = 1;

    for (int i = n; i > 1; i--){
        fact = fact * i;
    }

    cout<<fact;
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
    