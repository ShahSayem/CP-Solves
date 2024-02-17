#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve(){
    string s;
    cin>>s;
    
    if (s.size()%2)
        cout<<"NO";
    else {
        int cntB = count(s.begin(), s.end(), 'B');

        if (cntB == s.size()/2)
            cout<<"YES";
        else 
            cout<<"NO";
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
  
