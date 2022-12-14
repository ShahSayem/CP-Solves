#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    ll n, odddiv ;
    cin>>n;
    odddiv = sqrtl(n);

    ll x;
    for (ll i = 1; i <= odddiv; i++){
        x = (n/i);
        if ((ceil(sqrtl(i)) == sqrtl(i)) && (ceil(sqrtl(x)) == sqrtl(x))){
            cout<<sqrtl(i)<<" "<<sqrtl(x);
            return;
        }
    }
    
    cout<<-1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
