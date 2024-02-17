//Shah Sayem
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
//vector <int> adj[10000000];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int a[2][2];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cin>>a[i][j];
        }
    }
    
    if ((a[0][0] < a[0][1]) && (a[1][0] < a[1][1]) && (a[0][0] < a[1][0]) && (a[0][1] < a[1][1])){
        cout<<"YES";
        return;
    }

    int n = 4, x1 = a[0][0], x2 = a[0][1], y1 = a[1][0], y2 = a[1][1];
    while (n--){
        a[0][0] = y1, a[1][0] = y2, a[1][1] = x2, a[0][1] = x1;

        if ((a[0][0] < a[0][1]) && (a[1][0] < a[1][1]) && (a[0][0] < a[1][0]) && (a[0][1] < a[1][1])){
            cout<<"YES";
            return;
        }

        x1 = a[0][0], x2 = a[0][1], y1 = a[1][0], y2 = a[1][1];
    }
    
    cout<<"NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
