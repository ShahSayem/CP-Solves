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

    vector < pair<int, int> > a(n), b(n), c(n);
    for (int i = 0; i < n; i++){
        cin>>a[i].first;
        a[i].second = i;
    }
    sort(a.rbegin(), a.rend());

    for (int i = 0; i < n; i++){
        cin>>b[i].first;
        b[i].second = i;
    }
    sort(b.rbegin(), b.rend());

    for (int i = 0; i < n; i++){
        cin>>c[i].first;
        c[i].second = i;
    }
    sort(c.rbegin(), c.rend());

    ll ans = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                if (((a[i].second != b[j].second) && (a[i].second != c[k].second)) && ((b[j].second != a[i].second) && (b[j].second != c[k].second)) && ((c[k].second != a[i].second) && (c[k].second != b[j].second))){
                    ans = max(ll(a[i].first + b[j].first + c[k].first), ans);
                }
            }
        }
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
