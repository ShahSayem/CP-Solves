#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n, cnt = 0;
    cin>>n;

    string s;
    cin>>s;

    if (n%2)   
        cnt++; 

    ll mid = n/2;
    for (int i = (n/2)-1; i > -1; i--){
        if (s[i] == s[mid])
            cnt += 2;
        else 
            break;
    }
    
    cout<<cnt;   
}

int main()
{
    int t;
    cin>>t;

    while (t--){
        solve();
        cout<<"\n";     
    }
    
    return 0;
}
    