#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    string s;
    cin>>s;

    int n = s.size(), cnt = 0;
    for (int i = 0, j = n-1; i < n/2; i++, j--){
        if (s[i] != s[j])
            cnt++;
    }
    
    cout<<cnt;
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