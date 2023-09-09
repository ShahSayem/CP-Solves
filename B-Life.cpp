#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    cin>>n;

    vector <int> v(n);
    map <int, int> mp;
    vector <pair<int, int>> ans;
    for (int i = 0; i < n; i++){
        cin>>v[i];
        mp[v[i]]++; 
    }
    sort(v.begin(), v.end());

    int cnt = 0, x = v[0], y;
    bool start = 1;
    for (int i = 1; i < n; i++){
        if ((v[i] != v[i-1]+1)){
            y = v[i-1];
            ans.push_back({x, y});
            x = v[i];
            cnt++;
            start = 0;
        }
        if (i == n-1){
            y = v[i];
            ans.push_back({x, y});
            cnt++;
        }
    }

    cout<<cnt<<"\n";
    for (auto it : ans){
        if (it.first != it.second)
            cout<<it.first<<"->"<<it.second<<"\n";
        else 
            cout<<it.first<<"\n";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        //cout<<"\n";
    }

    return 0;
}
