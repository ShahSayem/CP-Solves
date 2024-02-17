#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    string s;
    cin>>s;

    int j;
    cout<<s[0];
    for (int i = 1; i < s.size(); i++){
        if (s[i] == s[i-1] || s[i] == (s[i-1]+32) || s[i] == s[i-1]-32){
            cout<<'#';
        }
        else {
            cout<<s[i];
        }
    }
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
} 
  
