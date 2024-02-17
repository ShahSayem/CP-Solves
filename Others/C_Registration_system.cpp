#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n;
    cin>>n;

    map <string, ll> freq;
    for (int i = 0; i < n; i++){
        string s;
        cin>>s;

        if (freq[s] == 0){
            cout<<"OK"<<endl;
        }
        else {
            // auto it = freq.find(s);
            // cout<<it->first<<it->second<<endl;

            cout<<s<<freq[s]<<endl; // same as upper 2 lines of code
        }
        freq[s]++;
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
    