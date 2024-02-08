#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e6+5;

void solve()
{
    int n, x, cnt;
    cin>>n;

    // for (int i = 1; i*i <= MAX; i++){

    // }

    for (int i = 0; i < n; i++){
        cin>>x;

        cnt = 0;
        for (int j = 1; j*j <= x; j++){
            if (x%j == 0){
                cnt++;

                if ((x/j)*(x/j) != x){
                    cnt++;
                }
            }
        }
        
        cout<<cnt<<"\n";
    }  
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
