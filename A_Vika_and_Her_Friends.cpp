#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n, m, k, x, y;
    cin>>n>>m>>k;
    cin>>x>>y;
    
    string ans = "YES";
    int a, b;
    for (int i = 0; i < k; i++){
        cin>>a>>b;

        if ((abs(x-a)+abs(y-b))%2 == 0)
            ans = "NO";
    }

    cout<<ans;
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
