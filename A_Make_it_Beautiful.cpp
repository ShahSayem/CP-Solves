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
    int n, cnt = 1;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    sort(v.begin(), v.end(), greater <> ());

    int sum = 0;
    for (int i = 0; i < n; i++){
        if (v[i] == sum){
            swap(v[i], v[n-cnt]);
            cnt++;
        }

        sum += v[i];
    }

    bool check = 0;
    sum = 0;
    for (int i = 0; i < n; i++){
        if (v[i] == sum){
            cout<<"NO";
            return;
        }

        sum += v[i];
    }

    cout<<"YES\n";
    for (int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
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
