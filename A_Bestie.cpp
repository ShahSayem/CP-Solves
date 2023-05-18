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
    int n, GCD = 0, x;
    bool even = 0, odd = 0;
    cin>>n;
    vector <int> v(n+1, 0), v2;
    v2.push_back(0);
    for (int i = 1; i <= n; i++){
        cin>>v[i];

        GCD = __gcd(v[i], GCD);
        v2.push_back(GCD);
        // cout<<GCD<<" ";
    }
    
    if (GCD == 1){
        cout<<0;
        return;
    }

    int ans;
    for (int i = n; i > 0; i--){
        x = __gcd(v2[i], i);
        
        ans = n-i+1;
        if (x == 1){
            cout<<ans;
            return;
        }

        if (ans == 3){
            cout<<ans;
            return;
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
