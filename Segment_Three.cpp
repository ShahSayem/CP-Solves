#include <bits/stdc++.h>
#include <iostream>
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

void solve()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    ll x, ans = 0;
    vector <ll> segments;
    for (int i = 0; i <= n-3; i++){
        x = v[i]+v[i+1]+v[i+2];
        segments.push_back(x);
    }

    int nn = segments.size();
    for (int i = 0; i < nn; i++){
        bool check = 0;

        if (segments[i]%3){
            ans += (3-(segments[i]%3));

            if (i < nn-1){
                if (segments[i+1]%3){
                    check = 1;
                    segments[i+1] += (3-(segments[i]%3));
                }
            }

            if (i < nn-2){
                if (segments[i+2]%3 && check){
                    segments[i+2] += (3-(segments[i]%3));
                }

                // if (segments[i+1]%3 && !check){  //recheck
                //     segments[i+1] += (3-(segments[i]%3));
                // }
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
