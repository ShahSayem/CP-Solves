#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
template <typename T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

int arr[MAX];   //Good to use 1 base inedxing
ll bit1[MAX];
ll bit2[MAX];
int n;

ll query(int idx)
{
    ll sum = 0;
    while (idx > 0){
        sum += bit1[idx];
        idx -= (idx & -idx);
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
    cin>>n;
    
    int x, y, cnt = 0;
    for (int i = 1; i <= n; i++){
        cin>>arr[i];

        x = query(MAX-2);
        y = query(arr[i]);

        cnt += (x-y);
        update(arr[i], 1);
    }

    cout<<cnt;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        solve();
        cout<<"\n";

        memset(bit1, 0, sizeof(bit1));
        memset(bit2, 0, sizeof(bit2));
    }

    return 0;
}
