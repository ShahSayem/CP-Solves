#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n, x, y, p;
    cin>>n;

    vector <int> v(n+1);
    for (int i = 1; i <= n; i++){
        cin>>v[i];

        if (v[i] == 1)
            x = i;
        else if (v[i] == 2)
            y = i;
        else if (v[i] == n)
            p = i;
    }
    
    if (p < x && p < y)
        cout<<min(x, y)<<" "<<p;
    else if (p > x && p > y)
        cout<<max(x, y)<<" "<<p;
    else 
        cout<<p<<" "<<p;
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
