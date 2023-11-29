#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, xorSum = 0;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        xorSum ^= v[i];
    }

    int mnXor = xorSum;
    for (int i = 0; i < n; i++){
        mnXor = min(xorSum^v[i], mnXor);
    }

    if (n == 1){
        cout<<0;
    }
    else {
        cout<<mnXor;
    }
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
