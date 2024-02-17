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

    map <char, int> mp;
    for (int i = 0; i < n; i++){
        mp[s[i]]++;
    }

    map <char, int> check;

    vector <int> pre(n), suf(n);
    int cnt = 1;
    pre[0] = cnt;
    check[s[0]] = 1;
    for (int i = 1; i < n; i++){
        if (check[s[i]] == 0){
            cnt++;
            check[s[i]] = 1;
        }
        
        pre[i] = cnt;
    }


    check.clear();
    cnt = 1;
    suf[n-1] = cnt;
    check[s[n-1]] = 1;
    for (int i = n-2; i >= 0; i--){
        if (check[s[i]] == 0){
            cnt++;
            check[s[i]] = 1;
        }
        
        suf[i] = cnt;
    }

    ll ans = 0, x;
    for (int i = 0; i < n-1; i++){
        x = pre[i]+suf[i+1];
        ans = max(ans, x);
    }

    cout<<ans;
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
