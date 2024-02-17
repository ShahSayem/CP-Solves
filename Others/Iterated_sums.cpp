#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int a, b;
    cin>>a>>b;

    long long sum = 0;
    for (int i = a; i <= b; i++){
        sum += (i*i);
    }

    cout<<sum;
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
