#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 70+5;

int n, m, dp[MAX][MAX][MAX];
vector < vector <int> > v;

///.........Graph.........///
int Y[] = {-1, 0, 1};

int mxCherryPic(int x, int y1, int y2)
{
    if ((y1 < 0 || y1 >= m) || (y2 < 0 || y2 >= m)){
        return -1e9;
    }

    if (x == n-1){
        if (y1 == y2)
            return v[x][y1];
        else 
            return (v[x][y1] + v[x][y2]);
    }

    if (dp[x][y1][y2] != -1)
        return dp[x][y1][y2];

    int mx = 0, curr; 
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (y1 == y2)
                curr = v[x][y1];
            else 
                curr = v[x][y1] + v[x][y2];

            mx = max((curr + mxCherryPic(x+1, y1+Y[i], y2+Y[j])), mx);
        }
    }

    return dp[x][y1][y2] = mx;
}

void solve()
{
    cin>>n>>m;

    memset(dp, -1, sizeof(dp));
    for (auto it : v){
        it.clear();
    }
    
    // v.resize(n);
    // for (auto it : v){
    //     it.resize(m);
    // }

    for (int i = 0; i < n; i++){
        vector <int> temp(m);
        for (int j = 0; j < m; j++){
            cin>>temp[j];

            //v[i].push_back(temp[j]);
        }
        
        v.push_back(temp);
    }

    // vector<vector<int>> matrix{
    //     {3, 1, 1},
    //     {2, 5, 1},
    //     {5, 6, 3},
    // };

    cout<<mxCherryPic(0, 0, m-1);
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
