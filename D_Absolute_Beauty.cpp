#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, mx1 = 0, mx2 = 0, mn1 = INT_MAX, mn2 = INT_MAX;
    cin>>n;

    int mn1Idx, mn2Idx, mx1Idx, mx2Idx;
    vector <int> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    
    int diff = INT_MAX;
    for (int i = 0; i < n; i++){
        cin>>b[i];

        if (max(a[i], b[i]) > mx1){
            mx1 = max(a[i], b[i]);

            
        }

        if (min(a[i], b[i]) < mn1){
            mn1 = min(a[i], b[i]);
        }
    }

}
int main() {
    Shah_Sayem
    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
