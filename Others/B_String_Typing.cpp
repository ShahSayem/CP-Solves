#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, half;
    cin>>n;

    half = n/2;
    string s, curr;
    cin>>s;

    for (int i = n/2; i > 0; i--){
        curr = s.substr(0, i);
        if (curr == s.substr(i, i)){
            cout<<n-i+1;
            return;
        }
    }
    
    cout<<n;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
