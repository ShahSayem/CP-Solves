#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin>>s;

    int cnt = 0;
    if (s[0] == 'y' || s[0] == 'Y')
        cnt++;
    if (s[1] == 'e' || s[1] == 'E')
        cnt++;
    if (s[2] == 's' || s[2] == 'S')
        cnt++;

    if (cnt == 3)
        cout<<"YES";
    else 
        cout<<"NO";
    
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
  
