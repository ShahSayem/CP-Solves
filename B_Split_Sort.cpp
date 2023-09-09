#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;

    bool check = 1;
    vector <int> v(n), pos(n+1);
    for (int i = 0; i < n; i++){
        cin>>v[i];
        pos[v[i]] = i;

        if (v[i] != i)
            check = 0;
    }

    if (check){
        cout<<0;
        return;
    }
    
    int cnt = 0;
    for (int i = 2; i <= n; i++){
        if (pos[i] < pos[i-1])
            cnt++;
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
