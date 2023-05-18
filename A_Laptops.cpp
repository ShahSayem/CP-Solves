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
    vector <pair <int, int>> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n-1; i++){
        if (v[i].second > v[i+1].second){
            cout<<"Happy Alex";
            return;
        }
    }
    
    cout<<"Poor Alex";
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
