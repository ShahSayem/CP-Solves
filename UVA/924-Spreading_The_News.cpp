#include <bits/stdc++.h>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2505;

 
///.........Graph.........///
vector <int> adj[MAX];
bool vis[MAX];
int level[MAX];

void bfs (int source)
{
    if (adj[source].empty()){
        cout<<0;
        return;
    }

    memset(vis, 0, sizeof(vis));
    memset(level, 0, sizeof(level));
    level[source] = 0;
    vis[source] = 1;
    queue <int> q;
    q.push(source);
    
    int node, cnt = 0, mx = 0, preNode = source;
    int currDay = 1, day;
    while (!q.empty()){
        node = q.front();
        q.pop();

        //currLevel = level[node]+1;

        if (level[node] != level[preNode]){
            cnt = 0;
            currDay++;
        }

        //cout<<"node "<<node<<" : ";
        for (int child: adj[node]){
            if (!vis[child]){
                level[child] = level[node]+1;
                vis[child] = 1;
                q.push(child);

                //cout<<child<<" ";
                cnt++;
            }
        }  
        //cout<<"\n";

        //cout<<cnt<<" ";
        if (cnt > mx){
            mx = cnt;
            day = currDay;
        }

        preNode = node;
    }

    cout<<mx<<" "<<day;
}


int main()
{
    Shah_Sayem

    int e, n, x;
    cin>>e;

    for (int i = 0; i < e; ++i){
        cin>>n;
        for (int j = 0; j < n; ++j){
            cin>>x;
            adj[i].push_back(x);
        }
    }

    int tc = 1, source;
    cin>>tc;
    while (tc--){
        cin>>source;

        bfs(source);
        cout<<"\n";
    }
 
    return 0;
}