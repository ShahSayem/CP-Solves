#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, k, x, cnt = 0, temp;
    cin>>n>>k>>x;

    if (n < k || k-1 > x){
        cout<<-1;
        return;
    }

    temp = 0;
    ll sum = 0;
    for (int i = 0; i < k; i++){
        sum += i;
        cnt++;
    }

    for (int i = 0; i < n-k; i++){
        cnt++;

        if (x == k)
            x--;
        sum += x;
    }
    
    cout<<sum;
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
