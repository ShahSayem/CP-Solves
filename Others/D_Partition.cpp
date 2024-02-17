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
    int n, m, mx = 1;
    cin>>n>>m;
    
    set <int> st;
    for (int i = sqrt(m); i >= 1; i--){
        if (m%i == 0){
            st.insert(i);
            st.insert(m/i);
        }
    }
    
    for (auto it : st){
        if (m/it >= n){
            mx = max(it, mx);
        }
    }

    cout<<mx; 
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
