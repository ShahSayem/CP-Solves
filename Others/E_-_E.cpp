#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int v, a, b, c;
    cin>>v>>a>>b>>c;

    while (1){
        if (v < a){
            cout<<"F";
            return;
        }

        v  -= a;
        if (v < b){
            cout<<"M";
            return;
        }
    
        v -= b;
        if (v < c){
            cout<<"T";
            return;
        }

        v -= c;
    }
} 
  

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
} 