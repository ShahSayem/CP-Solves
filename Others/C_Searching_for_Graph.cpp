#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 25+5;


///.........Graph.........///
bool adj[MAX][MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++){
            adj[i][j] = 0;
        }
    }

    int n, p, need, avg, ext;
    cin>>n>>p;

    need = ((2*n) + p) * 2;
    avg = need / n;
    ext = need % n;

    int curr, check, cnt = need;
    for (int i = 1; i <= n; i++){
        curr = avg;
        if (!ext)
            check = 1;
        else 
            check = 0;
        for (int j = 1; j <= n; j++){
            if (!curr && check)
                break;

            if (i != j && !adj[i][j] && !adj[j][i]){
                cout<<i<<" "<<j<<"\n";

                adj[i][j] = 1;
                adj[j][i] = 1;

                if (curr)
                    curr -= 2;
                else{ 
                    ext -= 2;
                    check = 1;
                }   

                cnt -= 2; 
            }

            if (cnt <= 0)
                return;
        } 
    } 
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
