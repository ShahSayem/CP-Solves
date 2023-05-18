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
    int n, cnt1 = 0, cnt_1 = 0, x;
    cin>>n;

    bool check = 1;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (v[i] == -1)
            cnt_1++;
        else 
            cnt1++;

        if (check && i && v[i] == -1 && v[i-1] == -1){
            v[i] = 1;
            v[i-1] = 1;

            check = 0;
        }
    }

    if (cnt_1){
        check = 0;
    }

    ll sum = 0;
    if (check){
        v[0] = -1;
        v[1] = -1;
    }

    for (int i = 0; i < n; i++){
        sum += v[i];
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
