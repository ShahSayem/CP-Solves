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
    string s;
    cin>>s;

    int n = s.size(), cntB = 0, ans = 0;
    for (int i = n-1; i >= 0; i--){
        if (s[i] == 'b')
            cntB++;
        else {
            ans += cntB;
            cntB *= 2;

            ans %= MOD;
            cntB %= MOD;
        }
    }
    
    cout<<ans;
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
