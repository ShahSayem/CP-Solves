#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
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
    int n;
    cin>>n;

    vector <int> v(n, 0), v2(n-1, 0), v3(n-2, 0);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    
    for (int i = 0; i < n-1; i++){
        cin>>v2[i];
    }
    sort(v2.begin(), v2.end());

    for (int i = 0; i < n-1; i++){  //searching 1
        if (v[i] != v2[i]){
            cout<<v[i]<<"\n";
            break;
        }
        else if (i == n-2){
            cout<<v[i+1]<<"\n";
        }
    }

    for (int i = 0; i < n-2; i++){
        cin>>v3[i];
    }
    sort(v3.begin(), v3.end());

    for (int i = 0; i < n-2; i++){  //searching 2
        if (v2[i] != v3[i]){
            cout<<v2[i]<<"\n";
            break;
        }
        else if (i == n-3){
            cout<<v2[i+1]<<"\n";
        }
    }
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
