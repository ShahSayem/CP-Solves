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
    ll n, rem;
    cin>>n;

    vector < pair <int, int> > v = {{1, 2}, {1, 4}, {1, 5}, {2, 4}, {2, 5}, {4, 5}};
    for (int i = 0; i < v.size(); i++){
        rem = n-(v[i].first + v[i].second);
        if (rem > 0 && rem%3 != 0 && (rem != v[i].first && rem != v[i].second)){
            cout<<"YES\n";
            cout<<rem<<" "<<v[i].first<<" "<<v[i].second;
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
