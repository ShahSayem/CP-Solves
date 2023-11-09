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

    map <int, int> mp;
    vector <int> v(n), vec;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        mp[v[i]]++;
    }
    
    int x;
    if (mp.size() > 2){
        cout<<"No";
    }
    else {        
        if (mp.size() == 1){
            cout<<"Yes";
            return;
        }

        x = 0;
        for (auto it : mp){
            x = abs(x-it.second);
        }
        
        if (x > 1){
            cout<<"No";
        }
        else {
            cout<<"Yes";
        }
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
