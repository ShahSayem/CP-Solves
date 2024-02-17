#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int cur = 1, mx = 1;
    for (int i = 0; i < n-1; i++){
        if (s[i] == s[i+1])
            cur++;
        else{
            mx = max(cur, mx);
            cur = 1;
        }
    }

    mx = max(cur, mx);
    cout<<mx+1;
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
