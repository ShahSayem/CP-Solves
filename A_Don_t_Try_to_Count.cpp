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
    int n, m;
    cin>>n>>m;

    string a, b;
    cin>>a>>b;

    for (int i = 0; i < n; i++){
        int j;
        for (j = 0; j < m; j++){
            if (a[i] == b[j]){
                i++;
                if (i >= n)
                    i = 0;
            }
            else {
                cout<<"NO";
                return;
            }
        }

        if (j == m && a[i-1] == b[j-1]){
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
