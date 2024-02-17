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
    vector <int> v(3);
    cin>>v[0]>>v[1]>>v[2];

    int noOfOperation = 4, n;
    while (noOfOperation--){
        n = v.size();
        sort(v.rbegin(), v.rend());

        if (v[0] == v[n-1]){
            cout<<"YES";
            return;
        }

        v.push_back(v[0]-v[n-1]);

        v[0] -= v[n];
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
