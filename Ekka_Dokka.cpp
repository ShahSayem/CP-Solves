#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    ll w, n, m = 1;
    cin>>w;
    
    if (w%2)
        cout<<"Impossible";
    else {

        n = w;
        while (n%2 == 0){
            n /= 2;
            m *= 2;
        }

        cout<<n<<" "<<m;
    }       
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    int i = 0;
    while (t--){
        i++;
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
} 