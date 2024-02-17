#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

bool graph[1005][1005], left1[1005][1005], right1[1005][1005], up[1005][1005], down[1005][1005];
int points[1005][1005];

void solve()
{
    int n, m;
    cin>>n>>m;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>graph[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        left1[i][0] = graph[i][0];
        for (int j = 1; j < m; j++){
            left1[i][j] = (left1[i][j-1] | graph[i][j]);
        }
    }

    for (int i = 0; i < n; i++){
        right1[i][m-1] = graph[i][m-1];
        for (int j = m-2; j >= 0; j--){
            right1[i][j] = (right1[i][j+1] | graph[i][j]);
        }
    } 
    
    for (int i = 0; i < m; i++){
        up[0][i] = graph[0][i];
        for (int j = 1; j < n; j++){
            up[j][i] = (up[j-1][i] | graph[j][i]);
        }
    }

    for (int i = 0; i < m; i++){
        down[n-1][i] = graph[n-1][i];
        for (int j = n-2; j >= 0; j--){
            down[j][i] = (down[j+1][i] | graph[j][i]);
        }
    }


    int cnt = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (j && left1[i][j-1] && !graph[i][j]){
                cnt++;
                points[i][j]++;
            }

            if ((j < m-1) && right1[i][j+1] && !graph[i][j]){
                cnt++;
                points[i][j]++;
            }

            if (i && up[i-1][j] && !graph[i][j]){
                cnt++;
                points[i][j]++;
            }

            if ((i < n-1) && down[i+1][j] && !graph[i][j]){
                cnt++;
                points[i][j]++;
            }
        }
    }

    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < m; j++){
    //         //cout<<points[i][j]<<" ";
    //         cout<<up[i][j];
    //     }
    //     cout<<"\n";
    // }
    
   cout<<cnt;
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
