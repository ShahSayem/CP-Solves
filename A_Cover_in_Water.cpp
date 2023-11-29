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
    int n;
    cin>>n;

    string s;
    cin>>s;

    int cnt = 0, mx = 0;
    // if (s[0] == '.'){
    //     cnt++;
    //     s[0] = 'P';
    // }
    // if (s[n-1] == '.'){
    //     cnt++;
    //     s[n-1] = 'P';
    // }

    for (int i = 0; i < n; i++){
        if (s[i] == '.' && (cnt == 0 || s[i-1] == '.')){
            cnt++;
        }
        else {
            mx = max(cnt, mx);
            cnt = 0;
        }
    }
    mx = max(cnt, mx);
    
    
    if (mx > 2){
        cout<<2;
    }
    else {
        cnt = 0;
        int ans = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == '.' && (cnt == 0 || s[i-1] == '.')){
                cnt++;
            }
            else {
                ans += cnt;
                cnt = 0;
            }
        }
        ans += cnt;
        
        cout<<ans;
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
