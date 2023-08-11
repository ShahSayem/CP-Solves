#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    ll n;
    cin>>n;
    ll sum = (n*(n+1LL))/2LL;
    vector <ll> v(n);
    for (int i = 0; i < n-1; i++){
        cin>>v[i];
    }

    if (v[n-2] > sum){
        cout<<"NO";
        return;
    }
    
    if (v[n-2] != sum){
        vector <ll> pref, arr;
        vector <bool> vis(n+1, 0);
        for (int i = 0; i < n-1; i++){
            pref.push_back(v[i]);
        }
        pref.push_back(sum);

        arr.push_back(pref[0]);
        for (int i = 0; i < n-1; i++){
            arr.push_back(pref[i+1]-pref[i]);
        }

        for (int i = 0; i < n; i++){
            if (arr[i] <= n)
                vis[arr[i]] = 1;
        }

        for (int i = 1; i <= n; i++){
            if(vis[i] == 0){
                cout<<"NO";
                return;
            }
        }
        cout<<"YES";
    }
    else {
        vector <ll> pref, arr;
        vector <bool> vis(n+1, 0);
        for (int i = 0; i < n-1; i++){
            pref.push_back(v[i]);
        }

        arr.push_back(pref[0]);
        for (int i = 0; i < n-2; i++){
            arr.push_back(pref[i+1]-pref[i]);
        }

        for (int i = 0; i < n-1; i++){
            if (arr[i] <= n)
                vis[arr[i]]  = 1;
        }
        
        vector <ll> missing;
        for (int i = 1; i <= n; i++){
            if(vis[i] == 0){
                missing.push_back(i);
            }
        }

        if (missing.size() != 2)
            cout<<"NO";       
        else{
            for (int i = 0; i < n-1; i++){
                if (missing[0]+missing[1] == arr[i]){
                    cout<<"YES";
                    return;
                }
            }
            
            cout<<"NO";
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
