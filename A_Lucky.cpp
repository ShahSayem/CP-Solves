#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{  
    string s;
    cin>>s;

    ll x = 0, y = 0;
    int i;
    for (i = 0; i < 3; i++){
        x += (s[i]-'0');
    }
    
    for (; i < 6; i++){
        y += (s[i]-'0');
    }
    
    if (x == y)
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
    