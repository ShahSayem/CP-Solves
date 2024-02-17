#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll n, p, x, a, cnt = 0;
    cin>>n>>p>>x>>a;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    for (int i = 0; i < n; i++){
        if (p >= v[i]){
            p -= v[i];
            cnt++;
        }
        else if ((((i < n-1) && (v[i] > v[i+1])) || (i == n-1) || ((p+x) < v[i])) && a){
            cnt++;
            a--;
        }
        else if ((p+x) >= v[i]){
            x -= (v[i] - p);
            p = 0; //p+z = v[i]
                  // p -= v[i] = 0
            cnt++;
        }
        else {
            break;
        }
    }
    
    cout<<cnt;
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
