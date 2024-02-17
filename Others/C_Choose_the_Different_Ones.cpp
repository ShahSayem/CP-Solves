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
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, m, k, x;
    cin>>n>>m>>k;

    set <int> st1, st2;
    for (int i = 0; i < n; i++){
        cin>>x;

        if (x <= k)
            st1.insert(x) ;
    }
    
    for (int i = 0; i < m; i++){
        cin>>x;

        if (x <= k)
            st2.insert(x) ;
    }

    if (st1.size() < st2.size()){
        st1.swap(st2);
    }

    int cnt = 0, sz1 = st1.size(), sz2 = st2.size();
    for (auto &&i : st2){
        if(st1.count(i)){
            cnt++;
        }
    }

    for (int i = 0; i <= cnt; i++){
        if ((sz1-i >= (k/2)) && (sz2-(cnt-i) >= (k/2))){
            cout<<"YES";
            return;
        }
    }
    
    cout<<"NO";
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
