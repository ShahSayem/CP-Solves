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

    ll sum = 0;
    vector <double> v(n);
    vector <int> vec(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        vec[i] = floor(v[i]);
        sum += vec[i];
    }

    for (int i = 0; i < n; i++){
        if (sum == 0)
            break;

        sum -= vec[i];
        vec[i] = ceil(v[i]);
        sum += vec[i];
    }

    for (int i = 0; i < n; i++){
        cout<<vec[i]<<" ";
    }   
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
