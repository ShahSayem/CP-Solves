#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

//int dp[MAX];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, m;
    cin>>n>>m;

    int b, g, idx, cntI = 0, cntJ = 0, total = 0;
    cin>>b;
    vector <bool> x(n, 0);
    for (int i = 0; i < b; i++){
        cin>>idx;
        x[idx] = 1;
    }

    cin>>g;
    vector <bool> y(m, 0);
    for (int i = 0; i < g; i++){
        cin>>idx;
        y[idx] = 1;
    }

    set <int> noOfhapp;

    int mx_unhappy = max(n, m);
    for (int i = 0, j = 0; total <= mx_unhappy*mx_unhappy; i++, j++){
        if (i == n){
            i = 0;
        }
        if (j == m){
            j = 0;
        }

        if (x[i%n] || y[j%m]){
            x[i%n] = 1;
            y[j%m] = 1;

            cntI++;
            cntJ++;
        }

        total++;
    }

    total = 0;
    for (int i = 0, j = 0; total <= mx_unhappy; i++, j++){
        if (i == n){
            i = 0;
        }
        if (j == m){
            j = 0;
        }

        if (!(x[i] || y[j])){
            cout<<"No";
            return;
        }

        total++;
    }

    cout<<"Yes";
}

int main()
{
    Shah_Sayem

    int t = 1;
    //cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
