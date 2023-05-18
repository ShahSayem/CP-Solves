#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    string s;
    cin>>s;

    if (s.size() == 2){
        cout<<s[1];
    }
    else {
        sort(s.begin(), s.end());
        cout<<s[0];
    }
    
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
    