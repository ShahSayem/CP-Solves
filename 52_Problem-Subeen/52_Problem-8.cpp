#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, c;
    cin>>a>>b>>c;

    if (a > c)
        swap(a, c);

    if (a > b)
        swap(a, b);

    if (b > c)
        swap(b, c);

    cout<<a<<" "<<b<<" "<<c;    
}

int main()
{
    int t, i = 1;
    cin>>t;

    while (t--){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<endl;
        i++;     
    }
    
    return 0;
}
    