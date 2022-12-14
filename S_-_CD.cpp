#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n, m, x, cnt = 0;
    cin>>n>>m;

    unordered_map <int, int> mp;
    while (n--){
        cin>>x;
        mp[x]++;
    }
    while (m--){
        cin>>x;
        mp[x]++;

        if (mp[x] > 1)
            cnt++;
    }

    cout<<cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
}
