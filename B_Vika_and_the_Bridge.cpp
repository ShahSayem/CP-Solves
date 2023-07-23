#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n, k, x, ans;
    cin>>n>>k;

    vector <int> idx[k+1];
    ans = n;
    for (int i = 1; i <= k; i++){
        idx[i].push_back(0);
    }
    for (int i = 1; i <= n; i++){
        cin>>x;
        idx[x].push_back(i);
    }
    for (int i = 1; i <= k; i++){
        idx[i].push_back(n+1);
    }

    for (int i = 1; i <= k; i++){
        vector <int> v;
        for (int j = 1; j < idx[i].size(); j++){
            v.push_back(idx[i][j] - idx[i][j-1]-1);
        }
        sort(v.begin(), v.end());
        int n1 = v.size();
        int a = v[n1-1]/2;

        if (n1 > 1)
            a = max(v[n1-2], a);

        ans = min(a, ans);
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
 