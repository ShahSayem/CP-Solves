#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int a, b, c, d, x, y;
    cin>>a>>b>>c>>d;

    if (d < b){
        cout<<-1;
        return;
    }

    if (a < c){
        x = abs(c-a);
        y = (abs((d-b)-x))*2;

        if (y < 0){
            cout<<-1;
            return;
        }

        cout<<x+y;
    }
    else if (a > c){

    }
    else {

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
