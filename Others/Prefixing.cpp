#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e5+5;
bool vis[MAX];

void solve()
{
    int n, mx = 0;
    cin>>n;

    memset(vis, 0, sizeof(vis));
    vector <int> a(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];

        mx = max(a[i], mx);
    }
    
    for (int i = 0; i < n; i++){
        if (vis[a[i]])
            cout<<mx<<" ";
        else {
            cout<<a[i]<<" ";
            vis[a[i]] = 1;
        }
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
