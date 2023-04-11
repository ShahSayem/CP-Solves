#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAX = 10000;
const int LOG = 14;
vector <int> children[MAX];
int up[MAX][LOG];
int depth[MAX];

void dfs(int a)
{
    for (int b: children[a]){
        depth[b] = depth[a] + 1;
        up[b][0] = a;
        for(int j = 1; j < LOG; j++){
            up[b][j] = up[ up[b][j-1] ][j-1];
        }
            
        dfs(b);
    }
}

int getLCA(int a, int b)
{
    if (depth[a] < depth[b]){
        swap(a, b);
    }

    int k = depth[a] - depth[b];
    for(int j = LOG-1; j >= 0 ; j--){
        if (k & (1 << j))
            a = up[a][j];
    }
    
    if (a == b)
        return a;

    for(int j = LOG-1; j >= 0 ; j--){
        if (up[a][j] != up[b][j]){
            a = up[a][j];
            b = up[b][j];
        }
    }

    return up[a][0];   //Here, up[a][0] = up[b][0]
}

int main()
{
    Shah_Sayem

    int n, cnt, c;
    cin>>n;
    for (int v = 0; v < n; v++){
        cin>>cnt;
        for (int i = 0; i < cnt; i++){
            cin>>c;
            children[v].push_back(c);
        } 
    }
    dfs(0);

    int q, a, b;
    cin>>q;
    while (q--){
        cin>>a>>b;

        cout<<getLCA(a, b)<<"\n";
    }
    
    return 0;
}
