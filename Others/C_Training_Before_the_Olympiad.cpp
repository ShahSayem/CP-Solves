#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll Modd = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, odd = 0;
    cin>>n;

    ll sum = 0, x;
    for (int i = 0; i < n; i++){
        cin>>x;

        sum += x;

        if (x & 1)
            odd++;

        if (i)
            cout<<sum - (odd/3) - (odd%3 == 1)<<" ";
        else 
            cout<<x<<" ";
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
