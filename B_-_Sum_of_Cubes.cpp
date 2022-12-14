#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

ll BinarySearch(ll a, ll x){
    a = a*a*a;
    ll l = 1, r = 10000; //10^18 (1e18) -> 10^10
    ll b = x-a;

    while (l<r){
        ll mid = l+(r-l)/2;

        if (mid == b){
            return mid;
        }
        if (b < a){
            l = mid +1;
        }
        else {
            r = mid;
        }
    }
    
    return l;
}

void solve()
{
    ll x;
    cin>>x;

    double bq, b;
    for (ll i = 1; (i*i*i) <= x ; i++){
        bq = x-(i*i*i);

        b = cbrt(bq);

        // cout<<bq<<" "<<b<<"\n";
        if (b == round(b) && b != 0){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
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
