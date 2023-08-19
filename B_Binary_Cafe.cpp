#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;


void solve()
{
    int n, k;
    cin>>n>>k;

    if (log2(n) < k){
        cout<<n+1;
    }
    else {
        cout<<int(pow(2, k));
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
