#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e5+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, k, x;
    string s;
    cin>>s>>k;
    n = s.size();

    vector <int> v(n), vec;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        v[i] = s[i]-'0';
        mp[v[i]]++;
    }
    vec = v;
    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; i++){
        mp[v[i]] = min(k, mp[v[i]]);
    }
    
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
