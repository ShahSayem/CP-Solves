#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

//int dp[MAX];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, cnt = 0;
    cin>>n;

    vector <int> v(n);
    ll sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++){
        cin>>v[i];
        sum1 += v[i];
    }

    for (int i = 0; i < n-1; i++){
        sum2 += v[i];
        sum1 -= v[i];

        if (sum1 == sum2)
            cnt++;
    }

    cout<<cnt;  
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
