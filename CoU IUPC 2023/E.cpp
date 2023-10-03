#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;

int arr[MAX], mnArr[MAX];
ll tree[4*MAX+1], mnTree[4*MAX+1];

void init(int node, int b, int e)   //b-e: range
{
    if(b == e){
        tree[node] = arr[b];
        mnTree[node] = mnArr[b];
        return;
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = tree[left] + tree[right];
    mnTree[node] = min(mnTree[left], mnTree[right]);
}

ll query(int node, int b, int e, int i, int j)
{
    if (b > j || e < i){
        return 0;
    }

    if (b >= i && e <= j){
        return tree[node];
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    ll leftSum = query(left, b, mid, i, j);
    ll rightSum = query(right, mid+1, e, i, j);
    return leftSum + rightSum;
}

ll minQuery(int node, int b, int e, int i, int j)
{
    if (b > j || e < i){
        return 1e18;
    }

    if (b >= i && e <= j){
        return mnTree[node];
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    ll leftMn = minQuery(left, b, mid, i, j);
    ll rightMn = minQuery(right, mid+1, e, i, j);
    return min(leftMn, rightMn);
}

void update (int node, int b, int e, int target, int val)
{   if (b > target || e < target)
        return;

    if (b == target && e == target){
        tree[node] = val;    //node != target (target -> array idx)
        mnTree[node] = val; //node -> tree idx
        return;
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    update(left, b, mid, target, val);
    update(right, mid+1, e, target, val);
    tree[node] = tree[left] + tree[right];
    mnTree[node] = min(mnTree[left], mnTree[right]);
}


void solve()
{
    int n, q;
    cin>>n>>q;

    for (int i = 0; i < n; i++){
        cin>>arr[i];
        mnArr[i] = arr[i];
    }  
    init(0, 0, n-1);

    int option, l, r, idx, val;
    while (q--){
        cin>>option;

        if (option == 1){
            cin>>idx>>val;
            idx--;
            update(0, 0, n-1, idx, val);
            arr[idx] = val;
            mnArr[idx] = val;
        }
        else {
            cin>>l>>r;
            l--, r--;
            cout<<query(0, 0, n-1, l, r)-minQuery(0, 0, n-1, l, r)<<"\n";
        }
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
    }

    return 0;
}
