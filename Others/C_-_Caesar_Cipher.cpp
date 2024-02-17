#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    ll n, check;
    cin>>n;

    char c, x;
    string s;

    cin.ignore();
    getline(cin, s);
    
    for (int i = 0; i < s.size(); i++){
        if (isspace(s[i])){
            cout<<" ";
            continue;
        }
        check = s[i]-n;

        if (check < 'a'){
            c = check+26;
        }
        else {
            c = check;
        }
        cout<<c;
    }
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
  
