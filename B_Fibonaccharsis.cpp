#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;


void solve()
{
    int n, k, ans = 0;
    cin>>n>>k;

    int f, s, fx;
    bool check;

    if (k > 28){
        cout<<ans;
        return;
    }
    for (int i = 0; i <= n; i++){
        s = n;
        f = i;
        check = 1;
        for (int j = 0; j < k-2; j++){    //this loop can execute highest 28 times
            fx = f;                      //as fibonacci series grows very fast
            f = s-fx;
            s = fx;

            check &= (f <= s);
            check &= (min(f, s) >= 0);

            if (!check)
                break;
        }
        
        if(check)
            ans++;
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
