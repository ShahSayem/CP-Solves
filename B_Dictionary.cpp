#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    string s;
    cin>>s;

    ll a = s[0]-'a';
    ll b = s[1]-'a';

    if (a>b)
        b++;
    
    cout<<(a*25)+b; 
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
    