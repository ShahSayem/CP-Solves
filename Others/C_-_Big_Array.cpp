#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

#define   ll   long long
using namespace std;


void solve()
{
    ll n, k;
    cin>>n>>k;

    vector <ll> v;
    for (int i = 0; i < n; i++){
        int a, b;
        cin>>a>>b;

        while (b--){
            v.push_back(a);
        }       
    }
    
    sort(v.begin(), v.end());

    cout<<v[k-1];
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
    