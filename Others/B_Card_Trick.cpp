#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n, m;
    cin>>n;

    vector <int> v1;
    for (int i = 0; i < n; i++){
        int j;
        cin>>j;
        v1.push_back(j);
    }

    cin>>m;
    int ans = 1;
    for (int i = 0; i < m; i++){
        int j;
        cin>>j;

        ans = (ans+j)%n;
        if (ans == 0)
            ans = n;
    }
    
    cout<<v1[ans-1];
}

int main()
{
    int t;
    cin>>t;

    while (t--){
        solve();
        cout<<"\n";     
    }
    
    return 0;
}
    