#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

//int dp[MAX];

///.........Graph.........///
vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve(int n)
{
    string str, u, v;
    unordered_map <string, int> mp;
    for (int i = 0; i < n; i++){
        cin>>str;
        mp[str] = i;
    }

    int r;
    cin>>r;
    for (int i = 0; i < r; i++){
        cin>>u>>v;

        adj[mp[u]].push_back(mp[v]);
        adj[mp[v]].push_back(mp[u]);
    }

    vector <int> vec;
    for (int i = 0; i < n; i++){
        if (adj[i].size() > 2){
            vec.push_back(i);
        }
    }
    
    cout<<vec.size()<<" camera(s) found\n";
    for (int i = 0; i < vec.size(); i++){
        for (auto it : mp){
            if (it.second == vec[i]){
                cout<<it.first<<"\n";
            }
        }
    } 
}

int main()
{
    Shah_Sayem

    for (int i = 1; ; i++){
        int n;
        cin>>n;

        if (n == 0)
            break;

        cout<<"City map #"<<i<<": ";
        solve(n);

        memset(adj, 0, sizeof(adj));
        cout<<"\n";
    }

    return 0;
}
