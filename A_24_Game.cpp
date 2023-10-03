#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 998244353;
const int MAX = 1e7+5;

void printSeq4_5(int n)
{
    if (n == 4){
        cout<<"1 * 2 = 2\n";
        cout<<"2 * 3 = 6\n";
        cout<<"6 * 4 = 24\n";
    }
    else if (n == 5){
        cout<<"5 - 3 = 2\n";
        cout<<"1 + 2 = 3\n";
        cout<<"2 * 3 = 6\n";
        cout<<"6 * 4 = 24\n";
    }
}

void solve()
{
    int n;
    cin>>n;

    if (n < 4){
        cout<<"NO\n";
    }
    else {
        cout<<"YES\n";
        while (n > 5){
            cout<<1<<" * "<<n<<" = "<<n<<"\n";
            cout<<n<<" - "<<n-1<<" = 1\n";

            n -= 2;
        }
        printSeq4_5(n);
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        //cout<<"\n";
    }

    return 0;
}
