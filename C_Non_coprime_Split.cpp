#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int l, r;
    cin>>l>>r;

    if ((r%2 == 0 || l != r) && r >= 4){
        cout<<r/2<<" "<<r/2;
        return;
    }
    else {
        for (int i = 3; i*i <= r; i++){
            if (r%i == 0){
                cout<<r-i<<" "<<i;
                return;
            }
        } 
    }

    cout<<-1;
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
