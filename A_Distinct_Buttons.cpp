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
    int n, x, y;
    cin>>n;

    int up = 1, down = 1, left = 1, right = 1;
    while (n--){
        cin>>x>>y;

        if (x > 0)
            up = 0;
        else if (x < 0)
            down = 0;

        if (y > 0)
            right = 0;
        else if (y < 0)
            left = 0;
    }
    
    if ((up+down) + (left+right))
        cout<<"YES";
    else 
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
