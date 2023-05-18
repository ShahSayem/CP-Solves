#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{  
    int n;
    cin>>n;

    vector <ll> v;
    ll j, sum = 0;
    for (int i = 0; i < n; i++){
        cin>>j;
        v.push_back(j);
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++){
        sum += (v[i]-v[0]);
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
    