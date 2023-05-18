#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n;
    cin>>n;
    
    string s;
    cin>>s;

    ll cnt = 1, ans = 0;
    for (int i = 0; i < n-1; i++){
        if (s[i] == s[i+1]){
            cnt++;
        }
        else {
            if (cnt%2 == 0){
                cnt = 1;
            }
            else {
                ans++;
                i++;
            }
        }
    }
    
    cout<<ans;
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
    