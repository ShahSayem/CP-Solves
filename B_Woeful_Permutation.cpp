#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    int n;
    cin>>n;

    if (n%2){
        cout<<1<<" ";
        for (int i = 2; i <= n; i+=2){
            cout<<i+1<<" "<<i<<" ";
        }
    }
    else {
        for (int i = 1; i <= n; i+=2){
            cout<<i+1<<" "<<i<<" ";
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
  
