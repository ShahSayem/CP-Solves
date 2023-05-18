#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){

    vector <ll> v;
    ll n;
    cin>>n;

    ll sum = 0, count = 0;
    for (int i = 0; i < n; i++){
        ll j;
        cin>>j;
        v.push_back(j);

        sum += j;
    }
    
    long double avarage = double(sum/n);
    ll cnt = 0;

    sort(v.begin(), v.end(), greater<ll>());
    for (int i = 0; i < n; i++){
        if (v[i] > avarage)
            cnt++;

        if (v[i] <= avarage)
            break;
    }

    cout<<cnt;
}

int main()
{
    // int t;
    // cin>>t;

    // while(t--){
        solve();
        cout<<endl;
    // }
    
    return 0;
}