#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 100000+5;

int arr[MAX];
int bitTree[MAX];

int query(int idx)
{
    int sum = 0;
    while (idx > 0){
        sum += bitTree[idx];
        idx -= (idx & -idx);
    }
    
    return sum;
}

void update(int idx, int val, int n)
{
    while (idx <= n){
        bitTree[idx] += val;
        idx += (idx & -idx);
    }
}

void solve()
{
    int n, q;
    cin>>n>>q;

    for (int i = 1; i <= n; i++){
        cin>>arr[i];

        update(i, arr[i], n);
    }
    
    int type, x, y, val, ans;
    while (q--){
        cin>>type;

        if (type == 1){
            cin>>x;
            x++;
            cout<<arr[x]<<"\n";
            
            update(x, -arr[x], n);
            arr[x] = 0;
        }
        else if (type == 2){
            cin>>x>>val;
            x++;
            update(x, val, n);
            arr[x] += val;
        }
        else {
            cin>>x>>y;
            x++, y++;

            ans = query(y)-query(x-1);
            cout<<ans<<"\n";
        }
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<":\n";
        solve();

        memset(bitTree, 0, sizeof(bitTree));
    }

    return 0;
}
