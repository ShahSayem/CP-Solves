#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, m, ans = 0, cnt = 0;
    cin>>n>>m;

    char a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        if (i%2==0){
            for (int j = 0; j < m; j++){
                if (a[i][j] == '.'){
                    cnt++;
                }
                if (a[i][j] == 'L'){
                    cnt = 0;
                }
                ans = max(ans, cnt);
            }
        }
        else {
            for (int j = m-1; j > -1; j--){
                if (a[i][j] == '.'){
                    cnt++;
                }
                if (a[i][j] == 'L'){
                    cnt = 0;
                }
                ans = max(ans, cnt);
            }
        }
    }

    cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
} 
  
