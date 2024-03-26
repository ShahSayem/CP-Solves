#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e5+5;

void solve()
{
    int n, mex;
    cin>>n;

    vector <int> v(n);
    vector < pair <int, int> > ans;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        mp[v[i]] = 1;
    }
    
    for (int i = 0; i < MAX; i++){
        if (!mp[i]){
            mex = i;
            break;
        }
    }

    if (mex == 0){
        cout<<2<<"\n";
        cout<<1<<" "<<1<<"\n";
        cout<<2<<" "<<n<<"\n";
    }
    else {
        int l = 0, sz;
        mp.clear();
        for (int i = 0; i < n; i++){
            if (v[i] < mex){
                mp[v[i]] = 1;
            }

            if (mp.size() == mex){
                ans.push_back({l+1, i+1});

                mp.clear();
                l = i+1;
            }

            if (ans.size() == 2)
                break;
        }

        sz = ans.size();
        ans[sz-1].second = n;

        if (sz < 2){
            cout<<-1<<"\n";
        }
        else {
            cout<<sz<<"\n";
            for (auto &&it : ans){
                cout<<it.first<<" "<<it.second<<"\n";
            }  
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
        //cout<<"\n";
    }

    return 0;
}
