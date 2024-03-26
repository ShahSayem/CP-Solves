#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    int n;
    cin>>n;

    char grid[2][n];

    for (int i = 0; i < 2; i++){    
        for (int j = 0; j < n; j++){    
            cin>>grid[i][j];
        }
    }

    string ans = "";
    ans += grid[0][0];
    int cnt = 1, mx = 1, i = 0, j = 0;
    while (j < n){ 
        if (i == 0){
            if (j < n-1){
                if (grid[i+1][j] == '0' && grid[i][j+1] == '1'){
                    i++;
                    mx = cnt;
                    cnt = 1;
                }
                else if (grid[i+1][j] == grid[i][j+1]){
                    cnt++;
                    j++;
                }
                else {
                    j++;
                    cnt = 1;
                }
            } 
            else { // j = n-1
                mx = cnt;
                ans += grid[i+1][j];
                break;
            }
        }
        else { // i = 1
            j++;

            if (j >= n)
                break;
        }

        ans += grid[i][j];
    }
    
    cout<<ans<<"\n"<<mx;
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
