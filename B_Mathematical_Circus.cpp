#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    ll n, k;
    cin>>n>>k;

    vector < pair<int, int> > ans;
    for (int i = 1; i <= n; i+=2){
        if (((i+k)*(i+1))%4 == 0)
            ans.push_back(make_pair(i, i+1));
        else if (((i+1+k)*(i))%4 == 0)
            ans.push_back(make_pair(i+1, i));
    }

    if (ans.size() != n/2)
        cout<<"NO\n";
    else {
        cout<<"YES\n";
        for (int i = 0; i < ans.size(); i++){
            cout<<ans[i].first<<" "<<ans[i].second<<"\n";
        }
    }
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;

    while (t--){
        solve();
    }

    return 0;
} 
  
