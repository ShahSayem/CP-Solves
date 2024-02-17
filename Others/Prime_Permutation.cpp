#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;

void ans(int start, int n)
{
    if (start > n)
        return;

    for (int i = start; i <= n; i+=4){
        cout<<i+2<<" "<<i+3<<" "<<i<<" "<<i+1<<" ";
    }
}

void solve()
{
    int n, start;
    cin>>n;

    if (n < 4){
        cout<<-1;
        return;
    }

    if (n%4 == 0){
        ans(1, n);
    }
    else if (n%4 == 1){
        cout<<"4 5 1 2 3 ";
        ans(6, n);
    }
    else if (n%4 == 2){
        cout<<"4 5 6 1 2 3 ";
        ans(7, n);
    }
    else {
        cout<<"3 4 6 2 7 1 5";
        ans(8, n);
    }
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
