#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n;
    cin>>n;

    string s;
    cin>>s;

    bool upper = true, lower = true, digit = true, special = true;
    for (int i = 0; i < n; i++){
        if (s[i] >= 'a' && s[i] <= 'z')
            lower = false;
        
        if (s[i] >= 'A' && s[i] <= 'Z')
            upper = false;
        
        if (s[i] >= '0' && s[i] <= '9')
            digit = false;

        if (s[i] == '#' || s[i] == '@' || s[i] == '*' || s[i] == '&')
            special = false;
    }


    if (upper)
        s += 'A';
    if (lower)
        s += 'a';
    if (digit)
        s += '1';
    if (special)
        s += '#';

    while (s.size() <= 6){
        s += 'a';
    }
    
    cout<<s;
}

int main()
{
    int t;
    cin>>t;

    for (int i = 1; i <= t; i++){
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<"\n";     
    }
    
    return 0;
}
    