#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

const ll MX = 10e15;

void solve()
{
    ll n;
    cin>>n;

    vector <ll> v;
    for (ll i = 1; i*i <= n; i++){
        if (n%i == 0){
            v.push_back(i);

            ll b = n/i;
            if (i != b){
                v.push_back(b);
            }
        }     
    }
    
    ll sum = 0;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size()-1; i++){
        sum += v[i];
    }   

    cout<<sum;   
}

int main()
{
    int t;
    cin>>t;

    while (t--){
        solve();
        cout<<endl;     
    }
    
    return 0;
}
    