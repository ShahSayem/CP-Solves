#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, sz;
    cin>>n;

    vector <string> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    sz = v[0].size();
    int cnt, currAns, ans = INT_MAX;
    string base, curr, x;
    for (int i = 0; i < n; i++){
        base = v[i];
        currAns = 0;
        for (int j = 0; j < n; j++){
            cnt = 0;
            curr = v[j];

            while (curr != base){
                curr = curr.substr(1, sz-1) + curr[0];
                cnt++;

                if (cnt > sz){
                    cout<<-1;
                    return;
                }
            }
            
            currAns += cnt;
        }
        ans = min(currAns, ans);
    }

    cout<<ans;
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
