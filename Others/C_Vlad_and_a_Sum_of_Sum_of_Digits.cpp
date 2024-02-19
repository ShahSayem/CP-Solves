#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 200000+1;
ll sums[MAX];

void solve()
{
    int n;
    cin>>n;

    cout<<sums[n];
}

int main()
{
    Shah_Sayem

    ll sum = 0;
    string curr;
    for (int i = 1; i < MAX; i++){
        curr = to_string(i);
        for (auto &&i : curr){
            sum += (i-'0');
        }

        sums[i] = sum;
    }

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}