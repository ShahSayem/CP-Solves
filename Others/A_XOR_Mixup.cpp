#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, x;
    cin>>n;
    vector <int> v(n, 0);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    for (int i = 0; i < n; i++){
        x = 0;
        for (int j = 0; j < n; j++){
            if (i != j)
                x ^= v[j]; 
        }

        if (x == v[i]){
            cout<<x;
            return;
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
  
