#include <iostream>
using namespace std;


void solve()
{
    int n, k;
    cin>>n;

    string s;
    cin>>s;

    cin>>k;

    for (int i = 0; i < n; i++){
        if (s[i] != s[k-1])
            cout<<"*";
        else 
            cout<<s[i];
    }
    
}

int main()
{
    int tc = 1;
    // cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
