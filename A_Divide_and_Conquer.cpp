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
    int n, sum = 0;
    cin>>n;
 
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
        sum += v[i];
    }

    if (sum%2 == 0){
        cout<<0;
        return;
    }

    int cnt = 0, x;
    while (1){
        cnt++;
        for (int i = 0; i < n; i++){
            v[i] /= 2;

            sum = 0;
            for (int i = 0; i < n; i++){
                sum += v[i];
            }

            if (sum%2 == 0){
                cout<<cnt;
                return;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
