#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];

void solve()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    map < int, int > mp;
    for (int i = 0; i < n; i++){
        if(v[i])
            mp[v[i]-1]++;

        mp[v[i]]++;
        mp[v[i]+1]++;
    }
    
    int ans = 0;
    for (auto it : mp){
        ans = max(it.second, ans);
        // cout<<it.second<<" ";
    }
    
    cout<<ans;
}

int main()
{
    Shah_Sayem
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif
        
    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}