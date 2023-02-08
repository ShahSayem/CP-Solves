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
    int n;
    cin>>n;
    string s;
    cin>>s;

    int cnt = n;
    for (int i = 0, j = n-1; i < j; i++, j--){
        if (s[i] != s[j])
            cnt -= 2;
        else {
            break;
        }
    }
    
    cout<<cnt;
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
