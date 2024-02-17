#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll n, k, sum = 0;
    cin>>n>>k;

    vector <int> v(n, 1);
    sum = n/2;
    for (int i = n/2; i < n; i++){
        v[i] = 2;
        sum+=2;
    }

    ll rem = k-sum, mx = 1e5, old;
    for (int i = 0; i < n; i++){
        if (rem <= 0)
            break;

        old = v[i];
        if (v[i]+rem >= mx){
            v[i] = mx;

            if (i < n/2)
                v[i]--;
        }    
        else {
            if (rem & 1){
                v[i] += (rem-1); //e+e = e , o+e = o
            }
            else {
                v[i] += rem; //e+e = e , o+e = o
            }
        }          

        sum += (v[i]-old); 
        rem -= (v[i]-old);
    }

    if (sum != k || rem != 0){
        cout<<-1;
        return;
    }

    for (auto it : v){
        cout<<it<<" ";
    }
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
