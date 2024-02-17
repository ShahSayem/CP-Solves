#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, x, y, cnt = 0;
    cin>>n>>x>>y;

    string a, b;
    cin>>a>>b;

    int l = -1, r = -1;
    for (int i = 0; i < n; i++){
        if (a[i] != b[i]){
            cnt++;

            if (l == -1)
                l = i;
            else 
                r = i;
        }
    }

    if (cnt & 1){
        cout<<-1;
    }
    else if (cnt == 2){
        if (l+1 != r)
            cout<<y;
        else {
            cout<<min(x, 2*y);
        }
    }
    else {
        cout<<((cnt*1LL)/2LL)*y*1LL; // if(cnt == 0)
    }                                //    (0/2)*y = 0;
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
