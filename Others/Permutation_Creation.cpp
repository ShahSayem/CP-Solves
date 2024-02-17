#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n;
    cin>>n;

    vector <int> v(n);
    if (n < 4){
        cout<<-1;
    }
    else {
        for (int i = 2; i <= n; i+=2){
            cout<<i<<" ";
        }

        for (int i = 1; i <= n; i+=2){
            cout<<i<<" ";
        }    
    }
    
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
