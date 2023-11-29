#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e4+5;

void solve()
{
    int n, k, sum;
    cin>>n>>k>>sum;

    int num = 1, curr = 0;
    for (int i = 0; i < n; i++){
        curr += num;
        num += 2;
    }

    num = 1;
    for (int i = 0; i < n; i++){
        if (curr + (num*(k-1)) == sum){
            cout<<num;
            return;
        }

        num+= 2;
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
