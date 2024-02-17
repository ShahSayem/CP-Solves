#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const ll MOD = 1e9+7;
const int MAX = 10000000+5;

void solve()
{
    int n;
    cin>>n;

    vector <int> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a.rbegin(), a.rend());

    for (int i = 0; i < n; i++){
        cin>>b[i];
    }
    sort(b.rbegin(), b.rend());

    ll cnt = 0, ans = 1, x = 0, curCnt = 0;
    int j = 0;
    for (int i = 0; i < n; i++){
        for (; j < n; j++){
            if (a[j] > b[i]){
                cnt++;
            }
            else {
                break;
            }
        }

        curCnt = cnt - x;
        ans *= curCnt;

        ans = (ans%MOD) + MOD;
        x++;
    }

    ans = ans % MOD;

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
