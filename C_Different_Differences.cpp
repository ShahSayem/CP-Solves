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
    int k, n;
    cin>>k>>n;

    int x = 1;
    vector <int> v(k+1);
    v[0] = 0, v[1] = 1;
    cout<<v[1]<<" ";
    for (int i = 2; i <= k; i++){
        if (k-i <= n-v[i-1]-x){
            v[i] = v[i-1]+x;
            x++;
        }
        else {
            v[i] = v[i-1]+1;
        }

        cout<<v[i]<<" ";
    }
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
