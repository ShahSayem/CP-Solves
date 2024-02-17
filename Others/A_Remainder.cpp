#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, x, y, cnt = 0;
    cin>>n>>x>>y;

    string s;
    cin>>s;

    for (int i = n-1; i >= n-x; i--){
        if (i == n-y-1){
            if (s[i] == '0'){
                cnt++;
            }
        }
        else {
            if (s[i] == '1')
                cnt++;
        }
    }
    
    cout<<cnt;
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
