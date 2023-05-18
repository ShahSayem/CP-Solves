#include<bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 100000+5;

int arr[MAX];
struct Tree
{
    ll sum, prop;
} tree[4*MAX+1];

void push(int node, int b, int e)
{
    if (tree[node].prop != -1){
        int left = node * 2 + 1;
        int right = node * 2 + 2;
        int mid = (b + e) / 2;

        tree[left].sum = tree[node].prop*(mid-b+1);
        tree[right].sum = tree[node].prop*(e-mid);
        tree[left].prop = tree[node].prop;
        tree[right].prop = tree[node].prop;
    }
    tree[node].prop = -1;
}

void init(int node, int b, int e)
{
    if (b == e){
        tree[node].sum = 0;
        tree[node].prop = -1;

        return;
    }

    int left = node * 2 + 1;
    int right = node * 2 + 2;
    int mid = (b + e) / 2;

    init(left, b, mid);
    init(right, mid+1, e);
    tree[node].sum = tree[left].sum + tree[right].sum;
}

ll query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b){
        return 0;
    }

    if (b >= i && e <= j){
        return tree[node].sum;
    }

    push(node, b, e);
    int left = node * 2 + 1;
    int right = node * 2 + 2;
    int mid = (b + e) / 2;

    ll leftSum = query(left, b, mid, i, j);
    ll rightSum = query(right, mid + 1, e, i, j);
    
    return leftSum + rightSum;
}

void update(int node, int b, int e, int i, int j, ll val)
{
    if (i > e || j < b)
        return;

    if (b >= i && e <= j){
        tree[node].sum = val*(e-b+1);
        tree[node].prop = val; 

        return;
    }

    push(node, b, e);
    int left = node * 2 + 1;
    int right = node * 2 + 2;
    int mid = (b + e) / 2;

    update(left, b, mid, i, j, val);
    update(right, mid + 1, e, i, j, val);
    tree[node].sum = tree[left].sum + tree[right].sum;
}

void solve()
{

    int type, i, j, val, n, q, GCD;
    ll x, y;
    cin>>n>>q;
    init(0, 0, n-1);

    while (q--){
        cin>>type>>i>>j;

        if (type == 1){
            cin>>val;
            update(0, 0, n-1, i, j, val);
        }
        else {
            x = query(0, 0, n-1, i, j);
            y =  j-i+1;

            if (x%y == 0)
                cout<<x/y<<'\n';
            else{
                GCD = __gcd(x, y);
                cout<<x/GCD<<"/"<<y/GCD<<"\n";
            }
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

        memset(tree, 0, sizeof(tree));
    }

    return 0;
}
