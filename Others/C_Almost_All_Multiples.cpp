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
    int n, x;
    cin>>n>>x;
    
    if (n%x){
        cout<<-1;
        return;
    }

    vector <int> v(n+1);
    v[1] = x;
    v[n] = 1;
    for (int i = 2; i < n; i++){  
        v[i] = i;
    }

    for (int i = 2; i*i <= n/x; i++){  
        while ((n/x) % i == 0){
            v[x] = x*i;
            x *= i;
        }  
    }

    if (x < n)
        v[x] = n;

    for (int i = 1; i <= n; i++){
        cout<<v[i]<<" ";
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
