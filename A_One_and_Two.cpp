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
    int n, cnt1 = 0, cnt2 = 0, sum = 0;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (v[i] == 1)
            cnt1++;
        else 
            cnt2++;
    }

    if (cnt2%2){
        cout<<-1;
        return;
    }

    int cnt22 = cnt2;
    for (int i = 0; i < n; i++){
        if (v[i] == 2){
            cnt2--;
        }

        if (cnt2 == (cnt22/2)){
            cout<<i+1;
            return;
        }
    }
    
    cout<<-1;
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
