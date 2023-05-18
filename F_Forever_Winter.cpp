#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n, m;
    cin>>n>>m;

    int u, v;
    vector <int> deg(n+1);
    for (int i = 0; i < m; i++){
        cin>>u>>v;
        deg[u]++;
        deg[v]++;
    }

    int cnt = 0, x, y;
    for (int i = 1; i <= n; i++){
        if(deg[i] == 1)
            cnt++;
    } 

    x = n-cnt-1;
    y = cnt/x;

    cout<<x<<" "<<y;   
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
