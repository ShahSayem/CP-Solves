#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    cout<<2<<"\n";
    for (int i = 1; i <= n; i += 2){
        for (int j = i; j <= n; j *= 2){
            cout<<j<<" ";
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
       
