#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 1e7+5;


void solve()
{
    ll m, k, a1, ak;
    cin>>m>>k>>a1>>ak;

    ll needmn = m/k, tk = 0, left, currNeed;
    tk = k*min(needmn, ak);
    ak -= min(needmn, ak);
    tk += a1;

    if (tk >= m){
        cout<<0;
        return;
    }

    tk -= a1;
    tk += k;
    if (m > tk)
        left = m-tk;
    else
        left = 0;

    tk += min(left, a1);
    if (tk == m){
        cout<<1;
        return;
    }

    left = m-tk;
    currNeed = left/k;
    tk += (k*currNeed);

    if (tk < m){
        cout<<currNeed+(m-tk)+1;
    }
    else {
        cout<<currNeed+1;
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