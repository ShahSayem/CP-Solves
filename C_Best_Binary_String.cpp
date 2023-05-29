#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    string s;
    cin>>s;

    int n = s.size();
    char x = '0';
    for (int i = 0; i < n; i++){
        if (s[i] == '?'){
            s[i] = x;
        }
        else {
            x = s[i];
            s[i] = x;
        }
    }
    
    cout<<s;
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
