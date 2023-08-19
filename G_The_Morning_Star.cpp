#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    int n;
    cin>>n;

    vector <int> x(n), y(n);
    map <int, int> xCnt, yCnt, v1Cnt, v2Cnt;
    for (int i = 0; i < n; i++){
        cin>>x[i]>>y[i];
        xCnt[x[i]]++;
        yCnt[y[i]]++;

        v1Cnt[x[i]-y[i]]++;
        v2Cnt[x[i]+y[i]]++;
    }

    ll ans = 0;
           //{v, cnt}
    for (auto it : xCnt)
        ans += (1LL*it.second*(it.second-1))/2;
    for (auto it : yCnt)
        ans += (1LL*it.second*(it.second-1))/2;
    for (auto it : v1Cnt)
        ans += (1LL*it.second*(it.second-1))/2;
    for (auto it : v2Cnt)
        ans += (1LL*it.second*(it.second-1))/2;

    cout<<ans*2;
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
