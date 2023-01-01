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
    int n, m;
    cin>>n>>m;

    vector <ll> a(n), b(m), c(m);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++){
        cin>>b[i];
        c[i] = b[i];
    }

    ll sum = 0, i = 0;
    if (m <= n){
        sort(b.begin(), b.end(), greater <> ());

        for (; i < n; i++){
            if  (i >= m){
                sum += a[i];
            }
            else {
                sum += b[i];
            }
        }
    }
    else {
        int cnt = 0, k = 0;
        sort(b.begin(), b.end());

        for (i = m-n; i < m; i++){
            if  (i >= m){
                sum += a[i];
            }
            else {
                sum += b[i];
            }
        }
    }
    
    

    cout<<sum;
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
