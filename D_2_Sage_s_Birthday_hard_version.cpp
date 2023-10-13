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

    vector <int> v(n), ans(n);
    for (size_t i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    int j = 0;
    for (size_t i = 1; i < n; i+=2){
        ans[i] = v[j];
        j++;
    }
    for (size_t i = 0; i < n; i+=2){
        ans[i] = v[j];
        j++;
    }
    
    int cnt = 0;
    for (int i = 1; i < n-1; i++){
        if (ans[i-1] > ans[i] && ans[i+1] > ans[i])
            cnt++;
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
