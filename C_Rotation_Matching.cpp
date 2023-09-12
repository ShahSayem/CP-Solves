#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, idx;
    cin>>n;

    vector <int> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++){
        cin>>b[i];
    }

    for (int i = 0; i < n; i++){
        if (a[0] == b[i])
            idx = i;
    }
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
