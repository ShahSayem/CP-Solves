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
    string s, a, b, c;
    cin>>s;

    int n = s.size();
    for (int i = 0; i < n; i++){
        a = s.substr(0, i+1);
        b = s.substr(i+1, 1);
        c = s.substr(i+2, n-i+1);

        if ((b <= a && b <= c) || (b >= a && b >= c)){
            cout<<a<<" "<<b<<" "<<c;
            return;
        }
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
