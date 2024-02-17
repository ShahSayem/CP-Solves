#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, check = 0;
    cin>>n>>m;

    string a, b;
    
    cin>>a;
    cin>>b;
    
    while (a.size() > b.size()){
        if (a[0] == b[0]){
            a[1] = a[0];
        }

        a.erase(a.begin());
    }
    
    if (a == b)
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
  
