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
    int n;
    cin>>n;

    vector <int> v(n), vec;
    map <int, int> mp;
    for (int i = 0; i < n; ++i){
        cin>>v[i];

        mp[v[i]] = i+1;
    }

    vec = v;
    sort(vec.begin(), vec.end());
    int idx;
    if (vec[n-1] < n){
        cout<<"NO";
        return;
    }
    
    for (int i = 0; i < n; ++i){
        idx = lower_bound(vec.begin(), vec.end(), i+1)-vec.begin();
        auto it = mp.find(vec[idx]);
        if (it->second < v[i]){
            cout<<"NO";
            return;
        }
    }

    cout<<"YES";
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
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}