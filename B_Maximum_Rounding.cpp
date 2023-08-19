#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);


void solve()
{
    string s;
    cin>>s;
    s = '0' + s;

    int n = s.size(), idx = -1;
    for (int i = 0; i < n; i++){
        if (idx != -1){
            s[i] = '0';
        }

        if (s[i] >= '5'){
            idx = i;
        }
    }
    
    if (idx == -1)
        idx = n-1;
    for (int i = idx; i >= 0; i--){
        if (s[i] >= '5'){
            s[i-1] = s[i-1]+'1'-'0';
            s[i] = '0';
        }
    }
    
    if (s[0] != '0')
        cout<<s;
    else 
        cout<<s.substr(1, n-1);
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
