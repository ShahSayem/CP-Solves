#include <bits/stdc++.h>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, k;
    cin>>n>>k;
 
    int l = 1, r = n;
    vector <int> ans(n);
    for (int i = 0; i < k; i++){
        for (int j = i; j < n; j += k){
            if (i & 1){
                ans[j] = l;
                l++;
            }
            else {
                ans[j] = r;
                r--;
            }
        }
    }

    for(auto i: ans)
        cout<<i<<" ";
}
 
int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}