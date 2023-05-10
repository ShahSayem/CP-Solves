#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

bool rec(int n, int m)
{
    if (n < m || n%3)
        return false;
    
    int x = n/3;
    int y = 2*x;

    return ((m == x || m == y) || (rec(x, m) || rec(y, m)));
}

void solve()
{
    int n, m;
    cin>>n>>m;

    if (n == m || rec(n, m))
        cout<<"YES";
    else
        cout<<"NO";
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
