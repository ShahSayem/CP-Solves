#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

// int arr[MAX];   //Good to use 1 base inedxing
ll bit1[MAX];

ll query(int idx)
{
    ll sum = 0;
    while (idx > 0){
        sum += bit1[idx];
        idx = (idx & (idx-1));
    }
    
    return sum;
}

void update(int idx, ll val)
{
    while (idx < MAX){
        bit1[idx] += val;
        idx += (idx & -idx);
    }
}


void solve()
{
    int n, temp;
    cin>>n;
    
    int x, y, cnt = 0;
    for (int i = 1; i <= n; i++){
        cin>>temp;

        x = query(MAX-3);
        y = query(temp);

        cnt += (x-y);
        update(temp, 1);
    }

    cout<<cnt;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while(tc--){
        solve();
        cout<<"\n";

        memset(bit1, 0, sizeof(bit1));
        // memset(arr, 0, sizeof(arr));
    }

    return 0;
}
