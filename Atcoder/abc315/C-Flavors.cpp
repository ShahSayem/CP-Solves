#include <bits/stdc++.h>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;


void solve()
{
	int n, f, s, mx = 0, idx;
	cin>>n;
	          //flavor Deliciousnes
    vector < pair <int, int> > v(n);
    for (int i = 0; i < n; ++i){
        cin>>f>>s;
        v[i] = {f, s};

        if (v[i].second > mx){
            mx = v[i].second ;
            idx = i;
        }
    }

    ll ans = 0;
    for (int i = 0; i < n; ++i){
        if (i != idx){
            if (v[i].first == v[idx].first){
                ans = max(ll(mx + v[i].second/2), ans);
            }
            else {
                ans = max(ll(mx + v[i].second), ans);
            }
        }
    }

    cout<<ans;
}
 
int main()
{
    Shah_Sayem
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}