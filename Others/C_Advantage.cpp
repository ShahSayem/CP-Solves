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
    int n, mx = 0, mx2 = 0;
    cin>>n;
    vector <int> v(n), v2(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
        v2[i] = v[i];
        if (mx < v[i]){
            mx = v[i];
        }
    }
    sort(v2.begin(), v2.end(), greater <int>());
    mx2 = v2[1];
    
    for (int i = 0; i < n; i++){
       if (mx == v[i]){
            cout<<v[i]-mx2;
        }
        else {
            cout<<v[i]-mx;
        }

        cout<<" ";
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
