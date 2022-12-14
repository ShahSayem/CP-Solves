#include <bits/stdc++.h>
#define ll long long;
using namespace std;

void solve(){
    int a, b, c;
    cin>>a>>b>>c;

    if ((a*a + b*b) == c*c || (a*a + c*c) == b*b || (b*b + c*c) == a*a)
        cout<<"yes";
    else
        cout<<"no";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }
  
    return 0;
}