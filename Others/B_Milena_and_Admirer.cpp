#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    ll ans = 0;
    int prev = v[n-1], steps;
    for (int i = n-2; i >= 0; i--){
        if (v[i] > prev){
            steps = (v[i]+(prev-1))/prev;
            ans += (steps - 1);
            prev =  v[i] / steps;  
        }
        else 
            prev = v[i];
    }

    cout<<ans; 
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
