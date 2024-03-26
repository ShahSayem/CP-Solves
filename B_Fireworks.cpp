#include <bits/stdc++.h>
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
    ll a, b, m;
    cin>>a>>b>>m;

    if (a == b){
        ll ans1 = ((m/a)*2) + 2;
        cout<<ans1;
        return;
    }

    if (a > b)
        swap(a, b);

    ll tempA = a, tempB = b, ans = 2;
    while ((tempA <= tempB) && (tempA+m <= tempB+m)){
        tempA += a;
        tempB += b;

        ans += 2;
    }
    
    if ((tempA <= tempB+m-b))
        ans++;

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
