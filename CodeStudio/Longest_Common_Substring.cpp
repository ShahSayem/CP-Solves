#include <bits/stdc++.h>
#include <string> 
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1000+5;

string a, b;
int dp[MAX][MAX];

int longestSubstring(int n, int m)
{
    for (int i = 0; i <= n; i++){
        dp[i][0] = 0;
    }
    for (int j = 0; j <= m; j++){
        dp[0][j] = 0;
    }

    int ans = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (a[i-1] == b[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else {
                dp[i][j] = 0;
            }

            ans = max(dp[i][j], ans);
        }
    }

    return ans;
}

void solve()
{
    cin>>a>>b;

    memset(dp, -1, sizeof(dp));
    int n = a.size(), m = b.size();
    cout<<longestSubstring(n, m);
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
