#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve(){
    double r, acir, arec, ans;
    cin>>r;

    arec = 4*r*2*r;
    acir = 3.1416*r*r*2;

    ans = arec-acir;

    printf("%0.2lf", ans);
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int t, w = 0;
    cin>>t;
    while (t--){
        w++;
        cout<<"Case "<<w<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
} 
  
