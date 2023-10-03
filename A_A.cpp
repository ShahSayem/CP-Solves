#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;

    if (n == 0){
        cout<<0;
        return;
    }
    
    vector <int> v(n, 1);
    //v[1] = 3, v[2] = 6;
    for (int i = 1; i < n; i++){
        v[i] = v[i-1]+(i+1);
    }

    cout<<v[n-1];
}

int main()
{
    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
