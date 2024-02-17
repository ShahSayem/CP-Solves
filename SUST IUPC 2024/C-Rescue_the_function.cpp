#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e8+5;

//Mock
void solve()
{
    int cnt = 0, n;
    double prev = INT_MIN, curr;
    cin>>n;

    for (int i = 0; i < MAX; i++){
        curr = sin(i)*cos(i);
        if (curr > prev){
            prev = curr;
            cnt++;

            cout<<i<<" ";
        }

        if (cnt >= n)
            break;
    }
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
