#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 200000+5;

//int dp[MAX];
// int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];

void solve()
{
    int n, x, cnt = 0, ans = 0;
    cin>>n;
    // memset(arr, 0, sizeof(arr));

    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin>>x;
        if (mp[x] == 0){
            cnt++;
            mp[x] = 1;
        }
        else {
            mp[x] = 0;
            cnt--;
        }

        ans = max(cnt, ans);
    }
    
    cout<<ans;
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
