#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{  
    ll n, q;
    cin>>n>>q;

    vector <ll> v;
    for (int i = 0; i < n; i++){
        ll j;
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(), v.end(), greater <ll>());

    vector <ll> x;
    ll sum = 0;
    for (int i = 0; i < n; i++){
        sum += v[i];
        x.push_back(sum);   
    }   
    
    while (q--){
        ll k;
        cin>>k;

        auto it = lower_bound(x.begin(), x.end(), k);
        if (it != x.end()){
            cout<<it-x.begin()+1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }  
}

int main()
{
    int t;
    cin>>t;

    while (t--){
        solve();
        // cout<<endl;     
    }
    
    return 0;
}
    