#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
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

    vector <int> a(n), ans;
    for (int i = 0; i < n; ++i){
        cin>>a[i];
    }

    if (n == 1){
        cout<<1<<"\n";
        cout<<a[0];
        return;
    }

    ans.push_back(a[0]);
    for (int i = 1; i < n; ++i){
        if (a[i-1] <= a[i]){
            ans.push_back(a[i]);
        }
        else {
            ans.push_back(a[i]);
            ans.push_back(a[i]);
        }
    }  

    cout<<ans.size()<<"\n";
    for (auto it: ans){
        cout<<it<<" ";
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

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}