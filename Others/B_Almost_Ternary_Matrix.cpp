#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, m;
    cin>>n>>m;

    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i%4 == 0 || i%4 == 3){
                if (j%4 == 0 || j%4 == 3){
                    a[i][j] = 1;
                }
                else
                    a[i][j] = 0;
            }
            else{
                if (j%4 == 0 || j%4 == 3){
                    a[i][j] = 0;
                }
                else
                    a[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        solve();
        // cout<<"\n";
    }

    return 0;
} 
  
