#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x;
    cin>>n>>x;

    vector <int> v (2*n);
    for (int i = 0; i < 2*n; i++){
        cin>>v[i];
    }
    
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i++){
        if (v[i]-x < v[i+n]){
            cout<<"NO";
            return;
        }
    }

    cout<<"YES";
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
  
