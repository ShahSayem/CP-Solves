#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

const ll MX = 10e15;
vector <ll> v;

void solve()
{
    ll n, k;
    cin>>n>>k;

    for (ll i = 1; i*i <= n; i++){
        if (n%i == 0){
            v.push_back(i);

            ll b = n/i;
            if (i != b){
                v.push_back(b);
            }
        }     
    }
    
    sort(v.begin(), v.end());

    if (k > v.size()){
        cout<<-1;
    }
    else{
        cout<<v[k-1];
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    
        
}

int main()
{
    // int t;
    // cin>>t;

    // while (t--){
        solve();
        cout<<endl;     
    // }
    
    return 0;
}
    