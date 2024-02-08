#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, op, x, l = -1, r = INT_MAX;
    cin>>n;

    map <int, int> mp;
    while (n--){
        cin>>op>>x;

        if (op == 1){
            l = max(x, l);
        }
        else if (op == 2){
            r = min(r, x);
        }
        else {
            mp[x]++;
        }
    }
    
    // for (int i = l; i <= r; i++){
    //     if ()
    // }
    
    int cnt = 0;
    for (auto it : mp){
        if ((it.first >= l) && (it.first <= r)){
            cnt++;
        }
    }
    
    int ans = r-l+1-cnt;

    if (ans > 0){
        cout<<ans;
    }
    else {
        cout<<0;
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
