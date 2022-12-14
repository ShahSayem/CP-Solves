#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n, count = 0;
    cin>>n;

    vector <ll> v;
    for (int i = 0; i < n; i++){
        int j;
        cin>>j;
        v.push_back(j);       
    }
    
    for (int i = n-2; i >= 0; i--){
        while (v[i] >= v[i+1]){ 
            if (v[i] == 0){
                cout<<-1;
                return;
            }
            v[i] /= 2;
            count++;
        }
    }
    cout<<count;
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
    