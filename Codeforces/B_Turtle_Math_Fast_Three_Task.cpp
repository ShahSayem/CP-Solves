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
    int n;
    cin>>n;

    ll sum = 0;
    vector <int> v(n);
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        sum += v[i];
        mp[v[i]]++;
    }
    
    if (sum%3 == 0){
        cout<<0;
        return;
    }
    else if (sum%3 == 2){
        cout<<1;
        return;
    }
    else {
        for (int i = 0; i < n; i++){
            if ((sum-v[i])%3 == 0){
                cout<<1;
                return;
            }
        }
    }

    cout<<2;
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
