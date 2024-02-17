#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int w, h, x1, y1, x2, y2, a, b, ans = INT_MAX, temp;
    cin>>w>>h;
    cin>>x1>>y1>>x2>>y2;
    cin>>a>>b;

    if (x2-x1+a <= w){
        ans = min(max(0, a-x1), ans);

        temp = x2-(w-a);
        ans = min(max(0, temp), ans);
    }

    if (y2-y1+b <= h){
        ans = min(max(0, b-y1), ans);

        temp = y2-(h-b);
        ans = min(max(0, temp), ans);
    }

    if (ans == INT_MAX) 
        cout<<-1;
    else 
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
