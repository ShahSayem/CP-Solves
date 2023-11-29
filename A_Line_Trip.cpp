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
    int n, x;
    cin>>n>>x;

    int mxGap;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (i == 0)
            mxGap = v[0];
        else{
            mxGap = max(mxGap, v[i]-v[i-1]);
        }
    }
    
    int ans = max(mxGap, (x-v[n-1])*2);

    cout<<ans;
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
