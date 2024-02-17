#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const int MAX = 100000;
struct Tree
{
    ll sum, prop;
} tree[4*MAX+1];
int arr[MAX];

ll query(int node, int b, int e, int i, int j, ll carry = 0)
{
    if (i > e || j < b){
        return 0;
    }

    if (b >= i && e <= j){
        return tree[node].sum + ((e - b + 1) * carry);
    }

    int left = node * 2 + 1;
    int right = node * 2 + 2;
    int mid = (b + e) / 2;

    ll leftSum = query(left, b, mid, i, j, carry + tree[node].prop);
    ll rightSum = query(right, mid + 1, e, i, j, carry + tree[node].prop);
    
    return leftSum + rightSum;
}

void update(int node, int b, int e, int i, int j, ll val)
{
    if (i > e || j < b)
        return;

    if (b >= i && e <= j){
        tree[node].sum += (e - b + 1) * val;
        tree[node].prop += val;

        return;
    }

    int left = node * 2 + 1;
    int right = node * 2 + 2;
    int mid = (b + e) / 2;

    update(left, b, mid, i, j, val);
    update(right, mid + 1, e, i, j, val);
    tree[node].sum = tree[left].sum + tree[right].sum + (e - b + 1)*tree[node].prop;
}

void solve()
{
    int n, q;
    cin>>n>>q;

    int type, i, j, val;
    while (q--){
        cin>>type;

        if (type){
            cin>>i>>j;
            cout<<query(0, 0, n-1, i, j)<<"\n";
        }
        else {
            cin>>i>>j>>val;
            update(0, 0, n-1, i, j, val);
        }
    }   
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<":\n";
        solve();

        for (int i = 0; i < 4*MAX+1; i++){
            tree[i].sum = 0;
            tree[i].prop = 0;
        }     
    }

    return 0;
}
