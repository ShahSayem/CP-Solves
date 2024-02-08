#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    char ch;
    string s;

    cin>>n>>ch>>s;

    for (int i = 0; i < n; i++){
        if (s[i] < ch){
            s.insert(i, 1, ch);
            break;
        }    
    }
    
    if (s.size() == n)
        s += ch;

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
