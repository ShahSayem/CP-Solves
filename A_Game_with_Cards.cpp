#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    ll n, m;
    cin>>n;

    vector <int> v1, v2;
    for (int i = 0; i < n; i++){
        int j;
        cin>>j;
        v1.push_back(j);
    }

    cin>>m;
    for (int i = 0; i < m; i++){
        int j;
        cin>>j;
        v2.push_back(j);
    }

    int x = *max_element(v1.begin(), v1.end());
    int y = *max_element(v2.begin(), v2.end());

    if (x == y)
        cout<<"Alice\nBob";
    else{
        if (x>y)
            cout<<"Alice\nAlice";
        else
            cout<<"Bob\nBob";
    }
    
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
    