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
    int n, p, x, cnt = 0;
    cin>>n;
    string s;
    cin>>s;
    cin>>p;

    for (int i = 1; i <= n; i++){
        if (s == "odd" && i%2 == 0){
            cnt++;

            if (cnt == p){
                cout<<i;
                return;
            }
        }
        else if (s == "even" && i%2){
            cnt++;

            if (cnt == p){
                cout<<i;
                return;
            }
        }
    }
    
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
