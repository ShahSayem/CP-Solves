#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e5+5;

void solve()
{
    int n;
    cin>>n;

    vector <bool> vis(n, 0);
    vector <int> ans(n);

    int x = n;
    for (int i = n-1; i >= 0; i--){
        if (x >= n || vis[x]){
            x = sqrt(i);
            if (x*x != i)
                x++;

            x = x*x;
            x -= i;
        }

        ans[i] = x;
        vis[x++] = 1;
    }
    
    for (auto it : ans){
        cout<<it<<" ";
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
