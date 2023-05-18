#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    string s;
    cin>>s;
    // cin.ignore();
    // getline(cin, s);

    string key = "Samsung";
    int cnt = 0;

    for (int i = 0, j = 0; i < s.size(); i++){
        if (s[i] == key[j]){
            cnt++;
            j++;
        }
    }
    
    if (cnt > 5)
        cout<<"SRBD";
    else 
        cout<<"GHOST";
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
  
