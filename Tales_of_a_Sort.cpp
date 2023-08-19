#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];

void solve()
{
    int n, cnt = 0;
    cin>>n;

    vector <int> v(n), temp;
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    temp = v;
    sort(temp.begin(), temp.end());

    int idx = -1;
    for (int i = n-1; i >= 0; i--){
        if (v[i] != temp[i]){
            idx = i;
            break;;
        }
    }

    if (idx == -1){
        cout<<0;
        return;
    }

    int mx = 0;
    for (int i = 0; i <= idx; i++){
        mx = max(v[i], mx);
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
