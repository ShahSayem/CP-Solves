#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    int a, b, c, d, x, y;
    cin>>a>>b>>c>>d;

    x = a-c;
    y = b-d;

    if (x == y)
        cout<<"Any";
    else if (x < y)
        cout<<"First";
    else
        cout<<"Second";
    
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
  
