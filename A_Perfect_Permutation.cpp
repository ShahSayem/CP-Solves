#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector <int> v(n+1);
    for (int i = 1; i <= n; i++){
        v[i] = i;
    }
    
    for (int i = 1; i < n; i += 2){
        swap(v[i], v[i+1]);
    }

    if (n > 1 && n%2)
        swap(v[n-1], v[n]);
    
    for (int i = 1; i <= n; i++){
        cout<<v[i]<<" ";
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
  
