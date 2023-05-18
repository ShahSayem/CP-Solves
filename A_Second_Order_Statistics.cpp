#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n;
    cin>>n;

    set <ll> s;
    for (int i = 0; i < n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }

    if (s.size() > 1){
        auto it = s.begin();
        it++;
        cout<<*it<<endl;
    } 
    else{
        cout<<"NO"<<endl;
    }  
}

int main()
{
    // int t;
    // cin>>t;

    // while (t--){
        solve();
        // cout<<endl;     
    // }
    
    return 0;
}
    