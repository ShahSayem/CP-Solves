#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n;
    cin>>n;

    map <int, int> freq;

    for (int i = 0; i<n; i++){
        int j;
        cin>>j;
        freq[j]++;
    } 

    if (freq[0] > 0){
        cout<<n-freq[0];
        return;
    } 

    for (auto it = freq.begin(); it != freq.end(); it++){
        if (it->second > 1){
            cout<<n;
            return;
        }
    }
    cout<<n+1;  
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
    