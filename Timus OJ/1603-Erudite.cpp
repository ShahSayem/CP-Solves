#include <bits/stdc++.h>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;
 
///.........Graph.........///
char graph[4][4];
bool vis[4][4];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};
string s;
bool findWord;

bool canReach(int x, int y, int idx)
{
    if ((x < 4 && y < 4) && (x >= 0 && y >= 0)){
        if(!vis[x][y] && graph[x][y] == s[idx])
            return true;
    }

    return false;
}

void dfs(int x, int y, int idx)
{
    if (!canReach(x, y, idx))
        return;

    int n = s.size();
    if (idx == n-1){
        findWord = 1;
        return;
    }

    vis[x][y] = 1;
    int xx, yy;
    for (int i = 0; i < 4; i++){
        xx = x+X[i];
        yy = y+Y[i];
            
        dfs(xx, yy, idx+1);
    }
    vis[x][y] = 0;
}

void solve()
{
    for (int i = 0; i < 4; ++i){
        for (int j = 0; j < 4; ++j){
            cin>>graph[i][j];
        }
    }

    int n;
    cin>>n;

    while(n--){
        cin>>s;
        findWord = 0;
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < 4; ++i){
            for (int j = 0; j < 4; ++j){
                if (s[0] == graph[i][j]){
                    dfs(i, j, 0);
                    if (findWord){
                        break;
                    }
                }
            }
            if (findWord)
                break;
        }

        cout<<s<<": ";
        if (findWord){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
}
 
int main()
{
    Shah_Sayem
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    solve();
 
    return 0;
}