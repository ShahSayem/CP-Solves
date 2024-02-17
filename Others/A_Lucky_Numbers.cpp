#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int l, r, luckN = 0, diff = 0, mn, mx;
    cin>>l>>r;

    string s;
    while (l < r){
        mn = INT_MAX, mx = 0;
        s = to_string(r);
        luckN = r;
        for (int i = 0; i < s.size(); i++){
            mx = max(s[i]-'0', mx);
            mn = min(s[i]-'0', mn);
        }
        diff = mx-mn;
        
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
