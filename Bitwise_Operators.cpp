#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, pw;
    cin>>n;

    if (n == 2){
        cout<<0<<" "<<2;
        return;
    }

    bitset <32> bset(n);
    for (int i = 0; i < 32; i++){
        if (bset[i] == 1){
            bset[i] = 0;

            pw = i;
            break;
        }    
    }
    
    cout<<powl(2, pw)<<" "<<bset.to_ullong();
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
