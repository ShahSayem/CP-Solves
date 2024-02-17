#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){

    ll n, m, x, y, ans = 0;
    cin>>n>>m>>x>>y;

    y = min(y, 2*x);
    string s;
    for (int i = 0; i < n; i++){
        cin>>s;
        for (int j = 0; j < m; j++){
            if (s[j] == '.'){
                if (j < m-1 && s[j+1] == '.')
                    ans += y, j++;
                else
                    ans += x;
            }
        }  
    }
    cout<<ans;
}

int main()
{
    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }
     
    return 0;
}