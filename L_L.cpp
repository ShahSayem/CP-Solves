#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, q;
    cin>>n>>q;

    string s;
    cin>>s;

    vector <int> preSum(n+1, 0);
    for (int i = 0; i < n-2; i++){
        if (s[i] == s[i+1] || s[i+1] == s[i+2] || s[i] == s[i+2]){
            preSum[i+1] = 1;
        }
    }

    // for (auto it : preSum){
    //     cout<<it<<" ";
    // }

    for (int i = 1; i <= n; i++){
        preSum[i] += preSum[i-1];
    }
    
    
    int l, r;
    //q = 0;
    while (q--){
        cin>>l>>r;
        l--, r--;

        if (r-l+1 >= 3 && (preSum[r-1]-preSum[l]) > 0){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    } 

    // for (auto it : preSum){
    //     cout<<it<<" ";
    // }
    
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
