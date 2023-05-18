#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n, count = 0;
    cin>>n;

    vector <ll> v;

    while (n != 0){
        if (n%2 == 1){
            n -= 3;
            v.push_back(3);
            count++;
        }

        if (n != 0){
            n -= 2;
            v.push_back(2);
            count++;
        }
    }
    sort(v.begin(), v.end());

    cout<<count<<endl;
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    
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
    