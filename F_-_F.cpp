#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, k, a, b;
    cin>>n>>m>>k;

    a = ceil(n*0.7);
    a = max(0, a-k);

    if (a > n-m)
        a = -1;
    b = ((k+n-m)*100)/n;

    cout<<a<<"\n";
    cout<<b<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
    // }

    return 0;
} 
  
