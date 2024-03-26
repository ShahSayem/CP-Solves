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

    string s;
    cin>>s;

    int cntLeft = 0, cntRight = 0, mid = (n+1)/2, satisfy;
    for (int i = 0; i <= n/2; i++){
        if (s[i] == '0')
            cntLeft++;
        else 
            cntRight++;
    }
    
    satisfy = cntLeft;
    int ans = n;
    for (int i = n/2; i < n; i++){
        if (satisfy >= mid){
            ans = i+1;
            break;
        }

        if (s[i] == '1'){
            satisfy++;
        }
        else {
            satisfy--;
        }
    }

    cntLeft = 0, cntRight = 0;
    for (int i = n-1; i >= (n+1)/2; i--){
        if (s[i] == '0')
            cntLeft++;
        else 
            cntRight++;
    }
    
    satisfy = cntRight;
    for (int i = (n+1)/2; i >= 0; i--){
        if (satisfy >= mid){
            ans = min(i+1, ans);
            break;
        }

        if (s[i] == '0'){
            satisfy++;
        }
        else {
            satisfy--;
        }
    }

    cout<<ans;
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
