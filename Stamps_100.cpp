#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, idx = -1;
    cin>>n;

    string s, ans = "";
    cin>>s;

    for (int i = 0; i < n-2; i++){
        if (s[i] == '1'){
            idx = i;
            break;
        }
    }
    
    if (idx == -1){
        cout<<s;
        return;
    }

    for (int i = 0; i < n; i++){
        if (idx == i){
            ans += '1';
        } 
        else {
            ans += '0';
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
