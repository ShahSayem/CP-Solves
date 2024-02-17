#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, k, cntEven = 0;
    cin>>n>>k;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if ((v[i] & 1) == 0)
            cntEven++;
    }

    int ans = INT_MAX, x, y;

    if (k != 4){ //2, 3, 5
        for (int i = 0; i < n; i++){
            if (v[i]%k == 0){
                cout<<0;
                return;
            }

            x = ((v[i]/k) * k) + k;

            ans = min(x-v[i], ans);
        }

        cout<<ans;
    }
    else { //4
        if (n == 1){
            if (v[0] <= k){
                cout<<k-v[0];
            }
            else {
                cout<<(((v[0]+k-1)/k) * k )-v[0];
            }

            return;
        }

        for (int i = 0; i < n; i++){
            if (v[i]%k == 0 || cntEven >= 2){
                cout<<0;
                return;
            }

            if ((v[i]+1) % k == 0){
                ans = 1;
            }
        }

        if (ans == 1 || cntEven == 1){
            cout<<1;
        }
        else {
            cout<<2;
        }
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
