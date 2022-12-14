#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, q;
    cin>>n>>q;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    int a, b, x, y;
    while (q--){
        cin>>a>>b;
        
        x = upper_bound(v.begin(), v.end(), b)-v.begin();
        y = lower_bound(v.begin(), v.end(), a)-v.begin();

        cout<<x-y<<"\n";    
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<":\n";
        solve();
    }

    return 0;
} 
  
