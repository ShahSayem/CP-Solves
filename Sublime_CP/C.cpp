#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e5+5;

void solve()
{
    int n, start = -1, mx = 0, cnt = 0, x;
    cin>>n;

    //vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>x;

        if (x == 1){
            cnt++;
        }
        else {
            mx = max(cnt, mx);
            cnt = 0;
        }
    }
    
    cout<<mx;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
