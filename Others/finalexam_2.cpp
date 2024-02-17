#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;

    long long cnt = 0;
    vector <char> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (i && v[i] == v[i-1])
            cnt++;
    }

    cout<<cnt;
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
