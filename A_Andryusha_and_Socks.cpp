#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n;
    cin>>n;

    ll a[2*n], count = 0, mx = 0;
    for (int i = 0; i < 2*n; i++){
        cin>>a[i];
    }
    
    map <ll, ll> freq;
    for (int i = 0; i < 2*n; i++){
        if (freq[a[i]] == 0){
            count++;
            freq[a[i]]++;

            if (count > mx)
                mx = count;
        }
        else{
            freq[a[i]]--;
            count--;
        }
    }  

    cout<<mx<<endl;   
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
    