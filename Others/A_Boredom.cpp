#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e5+10;

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

ll dp[MAX], freq[MAX], arr[MAX];

ll rec(ll dltVal)
{
    if (dltVal >= MAX)
        return 0;

    if (dp[dltVal] != -1){
        return dp[dltVal];
    }

    ll profit1 = freq[dltVal]+rec(dltVal+2);
    ll profit2 = rec(dltVal+1);
    dp[dltVal] = max(profit1, profit2);
    return dp[dltVal];
}

void solve()
{
    int n;
    cin>>n;
    for (int i = 0; i < MAX; i++){
        dp[i] = -1;
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++){
        cin>>arr[i];
        freq[arr[i]] += arr[i];
    }

    cout<<rec(1)<<"\n";
    
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
