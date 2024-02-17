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
    int n, k;
    cin>>n>>k;

    vector <int> v(n+1, 0), v2(n+1, 0);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    for (int i = n-1; i >= 0; i--){
        v2[i] =  v[i]+v2[i+1];
    }    

    int mn = INT_MAX, mnX = INT_MAX, ans;
    for (int i = n-k, j = n; i >= 0; i--, j--){
        mn = min(mn, v2[i]-v2[j]);

        if (mn != mnX){
            ans = i;
        }
        mnX = mn;
    }
    
    cout<<ans+1;
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
