#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, cnt = 0;
    cin>>n;

    int grid[n][n], arr[n];
    for (int i = 0; i < n; i++){
        arr[i] = (1<<30)-1;
    } 

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>grid[i][j];

            if (i != j){
                arr[i] &= grid[i][j];
                arr[j] &= grid[i][j];
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i != j){
                if ((arr[i] | arr[j]) != grid[i][j]){
                    cout<<"NO";
                    //cout<<"\n"<<(arr[i] | arr[j])<<" "<<grid[i][j];
                    return;
                }
            }
        }
    }

    cout<<"YES\n";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }   
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
