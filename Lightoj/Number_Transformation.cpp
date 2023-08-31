#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1000+5;

 
///.........Graph.........///
// vector <int> adj[MAX];
vector <int> primeList[MAX];
bool vis[MAX];
int dist[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void primeGen()
{
    int temp;
    for (int i = 0; i < MAX; ++i){
        temp = i;
        for (int j = 2; j*j <= i; j++){
            while (temp%j == 0){
                if (!vis[j]){
                    primeList[i].push_back(j);
                    vis[j] = 1;
                }    

                temp /= j;
            }
        } 

        if ((temp > 1 && temp != i) && !vis[temp]){
            primeList[i].push_back(temp);     
        }
        
        sort(primeList[i].rbegin(), primeList[i].rend());   
        memset(vis, 0, sizeof(vis));          
    }
}

int bfs (int source, int dest)
{
    if (!primeList[source].empty())
        dist[source] = 0;

    queue <int> q;
    q.push(source);

    int node, nextDest;
    while (!q.empty()){
        node = q.front();
        q.pop();

        for (int child:primeList[node]){
            nextDest = node + child;
            if (nextDest <= dest && dist[nextDest] == -1){
                q.push(nextDest);
                dist[nextDest] = dist[node]+1;
                if (nextDest == dest){
                    return dist[dest];
                }
            }
        }  
    }

    return dist[dest];
}

void solve()
{
    memset(dist, -1, sizeof(dist));

    int s, t;
    cin>>s>>t;

    if (s == t){
        cout<<0;
        return;
    }

    cout<<bfs(s, t);
}
 
int main()
{
    Shah_Sayem
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    primeGen();

    // for (int i = 1; i < 41; ++i){
    //     for (auto it: primeList[i]){
    //         cout<<it<<" ";
    //     }
    //     cout<<"\n";
    // }

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }
 
    return 0;
}