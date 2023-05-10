#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
#define error(x)        cerr << #x << " = " << (x) <<"\n";
#define Error(a,b)      cerr<<"( "<<#a<<" , "<<#b<<" ) = ( "<<(a)<<" , "<<(b)<<" )\n";
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1000000+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
vector <int> adj[MAX];
vector <int> travers;
bool vis[1000000] = {0};
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void dfs(int node)
{
    vis[node] = 1;
    travers.push_back(node);
    for (auto child: adj[node]){
        if (!vis[child])
            dfs(child);
    }
}

void solve()
{
    int n, m, k = n*m+1;
    cin>>n>>m;

    int arr[n][m];
    //vector <DisjointSet> lake((n*m)+1009);
    DisjointSet ds(n);
    // memset(arr, 0, sizeof(arr));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }

    int x = 1;
    vector <int> v(n*m+10);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
        }
    }
    
    int mx = 0;
    for (auto it : v){
       mx = max(it, mx);
    }
    
    cout<<mx;
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
