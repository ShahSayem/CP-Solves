#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, a, q, plus = 0, minus = 0;
    cin>>n>>a>>q;

    string update;
    cin>>update;

    for (int i = 0; i < q; i++){
        if (update[i] == '+'){
            plus++;
        }
        else {
            minus++;
        }

        if (a >= n || a+(plus-minus) >= n){
            cout<<"YES";
            return;
        }
    }


    if (a+plus >= n){
        cout<<"MAYBE";
    }
    else{
        cout<<"NO";
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
