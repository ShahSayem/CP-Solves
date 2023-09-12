#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, x;
    cin>>n;

    for (int i = 0; i < n; i++){
        cin>>x;
    }

    if (n%2){
        cout<<4<<"\n";
        cout<<1<<" "<<2<<"\n";
        cout<<1<<" "<<2<<"\n";
        cout<<2<<" "<<n<<"\n";
        cout<<2<<" "<<n<<"\n";
    }
    else {
        cout<<2<<"\n";
        cout<<1<<" "<<n<<"\n";
        cout<<1<<" "<<n<<"\n";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        //cout<<"\n";
    }

    return 0;
}
