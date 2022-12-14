#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s; 

    int n = s[s.size()-1]-'0';

    if (n%2 == 0)
        cout<<"even";
    else 
        cout<<"odd";
    
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
    