#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int  cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '0')
            cnt0++;
        else 
            cnt1++;
    }
    
    cout<<abs(cnt1-cnt0);
} 
  

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
} 