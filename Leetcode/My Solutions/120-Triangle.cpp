#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e2+5;

ll n, dp[MAX][MAX];
vector < vector <int> > v;

ll mnSumTriangle(int x, int y)
{
    if (x == n-1){
        return v[x][y];
    }

    if (dp[x][y] != -1)
        return dp[x][y];

    ll down = 0, diagonal = 0; 
    down = v[x][y] + mnSumTriangle(x+1, y); 
    diagonal = v[x][y] + mnSumTriangle(x+1, y+1);

    return dp[x][y] = min(down, diagonal);
}

void solve()
{
    cin>>n;

    memset(dp, -1, sizeof(dp));
    for (auto it : v){
        it.clear();
    }
    
    for (int i = 0; i < n; i++){
        vector <int> temp(i+1);
        for (int j = 0; j < i+1; j++){
            cin>>temp[j];
        }
        
        v.push_back(temp);
    }

    cout<<mnSumTriangle(0, 0);
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
