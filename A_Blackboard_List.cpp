#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
#define error(x)        cerr << #x << " = " << (x) <<"\n";
#define Error(a,b)      cerr<<"( "<<#a<<" , "<<#b<<" ) = ( "<<(a)<<" , "<<(b)<<" )\n";
typedef long long ll;

void solve()
{
    int n, x = 1, mx = 0;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (v[i] < 0)
            x = v[i];

        mx = max(v[i], mx);
    }
    
    if (x < 0){
        cout<<x;
        return;
    }
    
    cout<<mx;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
