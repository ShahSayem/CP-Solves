#include <bits/stdc++.h>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, idx, mx = -1;
    cin>>n;

    vector < pair <string, int> > v(n);
    map <string, int> mp;
    for (int i = 0; i < n; i++){
        cin>>v[i].first>>v[i].second;
        mp[v[i].first]++;

        if (v[i].second > mx && mp[v[i].first] == 1){
            mx = v[i].second;
            idx = i;
        }
    }
 
    cout<<idx+1;
}
 
int main()
{
    Shah_Sayem
    // #ifndef ONLINE_JUDGE
    //     freopen("Input.txt", "r", stdin);
    //     freopen("Output.txt", "w", stdout);
    // #endif

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}