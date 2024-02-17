#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, val, cnt, x;
    cin>>n;

       //val  cnt
    map <int, int> mp;
    vector <ll> v;
    for (int i = 0; i < n; i++){
        cin>>cnt>>val;

        if (mp[val]){
            x = mp[val];
            mp[val] = x+cnt;
        }
        else {
            mp[val] =  cnt;
        }

        //cout<<val<<" "<<mp[val]<<"\n";
    }
    
    for (auto it : mp){ //powers
        v.push_back(it.first);
    }
    sort(v.rbegin(), v.rend());

    // for (auto it : v)
    //     cout<<it<<" ";

    ll ans = 0, curr, len = 0, mn = INT_MAX;
    for (int i = 0; i < v.size(); i++){
        len += mp[v[i]];
        mn = min(v[i], mn);
        curr = len*mn;
        
        //cout<<mn<<" "<<len<<"\n";
        
        ans = max(curr, ans);
    }
    
    cout<<ans;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
