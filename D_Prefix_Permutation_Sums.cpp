#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;


void solve()
{
    ll n;
    cin>>n;
    ll sum = (n*(n+1LL))/2LL;
    vector <ll> v(n-1);
    for (int i = 0; i < n-1; i++){
        cin>>v[i];
    }

    if (v[n-2] > sum){
        cout<<"NO";
        return;
    }
    
    if (v[n-2] != sum){
        vector <int> pref, arr;
        vector <bool> vis(n, 0);
        for (int i = 0; i < n-1; i++){
            pref.push_back(v[i]);
        }
        pref.push_back(sum);

        int x;
        for (int i = n-1; i > 0; i--){
            x = pref[i]-pref[i-1];
            arr.push_back(x);
            vis[x] = 1;
        }
        arr.push_back(pref[0]);
        vis[pref[0]] = 1;

        for (int i = 0; i < n; i++){
            if(vis[i] == 0){
                cout<<"NO";
                return;
            }
        }
        cout<<"YES";
    }
    else {
        vector <int> pref, arr;
        vector <bool> vis(n, 0);
        for (int i = 0; i < n-1; i++){
            pref.push_back(v[i]);
        }

        int x;
        for (int i = n-2; i > 0; i--){
            x = pref[i]-pref[i-1];
            arr.push_back(x);
            if (x <= n)
                vis[x]  = 1;
        }
        arr.push_back(pref[0]);
        vis[pref[0]]  = 1;
        

        int cnt = 0;
        for (int i = 0; i < n; i++){
            if(vis[i] == 0){
                cnt++;
            }
        }

        if (cnt == 2 && )
        cout<<"YES";        
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
