#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;
bool check[5];

void solve()
{
    string a, b, x;
    cin>>a>>b;
    x = a+b;
    int n = a.size(), m = b.size(), idx1 = 0, idx2 = 0;

    for (int i = 0; i < (n+m); i++){
        if (i%2 == 0){
            cout<<a[idx1];
            idx1++;
        }
        else {
            cout<<b[idx2];
            idx2++;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
