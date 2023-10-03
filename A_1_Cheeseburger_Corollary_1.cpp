#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int s, d, k, bun, cheese, patty;
    cin>>s>>d>>k;

    bun = (s+d)*2;
    cheese = s+(d*2);
    patty = s+(d*2);

    bun -= (k+1);
    cheese -= k;
    patty -= k;

    if (bun < 0 || cheese < 0 || patty < 0){
        cout<<"NO";
    }
    else {
        cout<<"YES";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
