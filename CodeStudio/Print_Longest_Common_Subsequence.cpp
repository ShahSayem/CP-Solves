#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1000+5;

string a, b;
int dp[MAX][MAX];

int longestSubseq(int idx1, int idx2)
{
    if (idx1 < 0 || idx2 < 0)
        return 0;

    if (dp[idx1][idx2] != -1)
        return dp[idx1][idx2];

    
    int match = 0, notmatch = 0;

    if (a[idx1] == b[idx2])
        match = 1 + longestSubseq(idx1-1, idx2-1);
        
    notmatch = max(longestSubseq(idx1, idx2-1), longestSubseq(idx1-1, idx2));

    return dp[idx1][idx2] = max(match, notmatch);
}

void solve()
{
    cin>>a>>b;

    memset(dp, -1, sizeof(dp));
    int n = a.size(), m = b.size();
    int sz = longestSubseq(n-1, m-1);

    int i = n-1, j = m-1, idx = sz-1;
    string ans = "";
    for (int i = 0; i < sz; i++){
        ans+='#';
    }
    
    while (i >= 0 && j >= 0){
        if (a[i] == b[j]){
            ans[idx] = a[i];
            i--, j--;
            idx--;
        }
        else {
            if (dp[i-1][j] > dp[i][j-1]){
                i--;
            }
            else {
                j--;
            }
        }
    }

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
