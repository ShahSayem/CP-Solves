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

    vector <int> v(n), ans;
    for (size_t i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());


    int idx = n/2, cnt = 0;
    ans.push_back(v[idx]);
    idx++;
    for (size_t i = 0; i < n/2; i++){
        ans.push_back(v[i]);

        if (idx < n){
            ans.push_back(v[idx]);
            cnt++;
        }

        idx++;
    }
    
    cout<<cnt<<"\n";
    for (auto it : ans){
        cout<<it<<" ";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
