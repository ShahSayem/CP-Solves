#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    ll a, b, n;
    cin>>a>>b>>n;

    ll sum = 0, old = b;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        sum += v[i];
    }
    sort(v.begin(), v.end());

    if (a == 1){
        cout<<b;
        return;
    }
    else if (a == 2){
        cout<<b+n;
        return;
    }
    
    sum = b;
    for (int i = 0; i < n;){
        b = 1;
        old = b;
        if (b < a){ 
            b = min(b+v[i], a);
            i++;

            sum += (b-old);
            old = b;
        }
    }
    
    cout<<sum;
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
