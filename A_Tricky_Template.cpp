#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    cin>>n;

    string a, b, c;
    cin>>a>>b>>c;

    for (int i = 0; i < n; i++){
        if ((a[i] != c[i]) && (b[i] != c[i])){
            cout<<"YES";
            return;
        }
    }
    
    cout<<"NO";
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
