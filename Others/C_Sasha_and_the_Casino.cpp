#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    //  limit initial
    ll k, x,    a, next, curr = 1, initial;
    cin>>k>>x>>a;

    initial = a;
    for (int i = 1; i < x; i++){
        next = curr/(k-1);
        next++;

        curr += next;
        if (curr >= a){
            cout<<"NO";
            return;
        }    
    }
    
    a -= curr;
    a *= k;
    if (a > initial)
        cout<<"YES";
    else 
        cout<<"NO";
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
