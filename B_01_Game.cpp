#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin>>s;
    
    int a = count(s.begin(), s.end(), '0');
    int b = count(s.begin(), s.end(), '1');

    int mn = min(a, b);
    if (mn == 0 || mn%2 == 0)
        cout<<"NET";
    else
        cout<<"DA";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}