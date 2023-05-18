#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n, q, cntEven = 0, cntOdd = 0;
    cin>>n>>q;

    ll sum = 0;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
        
        sum += v[i];

        if (v[i]%2){
            cntOdd++;
        }
        else {
            cntEven++;
        }
    }

    int type, x;
    while (q--){
        cin>>type>>x;

        if (type){
            sum += (x*cntOdd);

            if (x%2){
                cntEven += cntOdd;
                cntOdd = 0;
            }
        }
        else {
            sum += (x*cntEven);

            if (x%2){
                cntOdd += cntEven;
                cntEven = 0;
            }
        }

        cout<<sum<<"\n";
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
    }

    return 0;
}
