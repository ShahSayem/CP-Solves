#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve(){
    int n, a, b;
    cin>>n>>a>>b;

    ll sum = 0;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (i >= a && i <= b)
            sum += v[i];
    }
    
    cout<<sum;
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
  
