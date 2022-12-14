#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, m;
    cin>>n>>m;

    vector <int> price(n);
    map <string, int> mp;
    for (int i = 0; i < n; i++){
        cin>>price[i];
    }
    sort(price.begin(), price.end());

    for (int i = 0; i < m; i++){
        string s;
        cin>>s;

        mp[s]++;
    }
    
    vector <int> v;
    int mn = 0, mx = 0;
    for (auto x:mp){
        v.push_back(x.second);
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < v.size(); i++){
        mn += (v[i]*price[i]);
    }
    
    sort(price.rbegin(), price.rend());
    for (int i = 0; i < v.size(); i++){
        mx += (v[i]*price[i]);
    }

    cout<<mn<<" "<<mx;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
}
