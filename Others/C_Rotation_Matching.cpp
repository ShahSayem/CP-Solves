#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, shift;
    cin>>n;

    vector <int> a(n), b(n), pos(n+1), cnt(n, 0);
    for (int i = 0; i < n; i++){
        cin>>a[i];

        pos[a[i]] = i;
    }

    int ans = 0;
    for (int i = 0; i < n; i++){
        cin>>b[i];

        shift = pos[b[i]]-i;

        if (shift < 0){
            shift += n;
        }

        cnt[shift]++;
        ans = max(cnt[shift], ans);
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
