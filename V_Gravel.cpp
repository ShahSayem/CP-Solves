#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 1000000+5;

ll arr[MAX];
ll bit1[MAX];
ll bit2[MAX];
ll n;

ll query(ll idx, ll *bit)
{
    ll sum = 0;
    while (idx > 0){
        sum += bit[idx];
        idx -= (idx & -idx);
    }
    
    return sum;
}

void update(ll idx, ll val, ll *bit)
{
    while (idx <= n){
        bit[idx] += val;
        idx += (idx & -idx);
    }
}

void rangeUpdate(ll l, ll r, ll val)
{
    update(l, val, bit1);
    update(r+1, -val, bit1);

    update(l, val*(l-1), bit2);
    update(r+1, -val*r, bit2);
}

ll rangeQuery(ll l, ll r)
{   
    ll sum1 = query(r, bit1)*r - query(r, bit2);
    ll sum2 = query(l-1, bit1)*(l-1) - query(l-1, bit2);

    return sum1 - sum2;
}


int main()
{
    Shah_Sayem

    ll m, c;
    cin>>n>>m>>c;

    for (ll i = 1; i <= n; i++){
        arr[i] = c;

        rangeUpdate(i, i, arr[i]);
    }

    char type;
    ll u, v, k, p;
    while (m--){
        cin>>type;

        if (type == 'S'){
            cin>>u>>v>>k;

            rangeUpdate(u, v, k);
        }
        else {
            cin>>p;
            cout<<rangeQuery(p, p)<<"\n";
        }
    }


    return 0;
}
