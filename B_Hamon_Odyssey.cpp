#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 10000000+5;

void solve()
{
    int n;
    cin>>n;

    vector <int> v(n), v2(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    v2[n-1] = v[n-1];

    int x = 1, cnt = 1;
    for (int i = n-2; i >= 0; i--){
        v2[i] = v[i] & v2[i+1];
    }

    if (v2[0]){
        cout<<1;
        return;
    }

    x = ~0;
    for (int i = 0; i < n-1; i++){
        x &= v[i];

        if (x == 0 && v2[i+1] == 0){
            cnt++;
            x = ~0;
        }
    }

    cout<<cnt;
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
