#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    string s;
    cin>>s;

    int n = s.size();
    bool check = 0;
    for (int i = 0; i < n-1; i++){
        if (s[i] != s[i+1])
            check = 1;
    }
    
    if (!check)
        cout<<-1;
    else 
        cout<<n-1;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
