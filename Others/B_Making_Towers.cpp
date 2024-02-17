#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

const int MAXN = 100100;
int dp[2][MAXN];

void solve(){
    int n;
    cin>>n;

    for (int i = 0; i < 2; i++) {
      for (int j = 1; j <= n; j++) {
        dp[i][j] = 0;
      }
    }
 
    for (int i = 1; i <= n; i++) {
      int x; cin >> x;
      dp[i & 1][x] = max(dp[i & 1][x], dp[(i ^ 1) & 1][x] + 1);
    }
 
    for (int i = 1; i <= n; i++)
      cout << max(dp[0][i], dp[1][i]) << " \n"[i == n];
 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        solve();
        // cout<<"\n";
    }

    return 0;
} 
  
