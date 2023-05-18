#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

//int dp[MAX];
int arr[MAX];
int tree[4*MAX];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void init(int node, int b, int e)   //b-e: range
{
    if(b == e){
        tree[node] = arr[b];

        return;
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    init(left, b, mid);
    init(right, mid+1, e);

    tree[node] = tree[left] + tree[right];
}

int query(int node, int b, int e, int i, int j)
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

    int leftN = query(left, b, mid, i, j);
    int rightN = query(right, mid+1, e, i, j);

    return leftN + rightN;
}

void update (int node, int b, int e, int target, int val)
{   if (b > target || e < target)
        return;

    if (b == target && e == target){
        tree[node] += val; //node != target

        return;
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    update(left, b, mid, target, val);
    update(right, mid+1, e, target, val);

    tree[node] = tree[left] + tree[right];
}


void solve()
{
    int n, q, operation, i, j;
    cin>>n>>q;
    init(0, 0, n-1);

    while (q--){
        cin>>operation>>i>>j;

        if (operation){
            cout<<query(0, 0, n-1, i, j);
        }
        else {
            update(0, 0, n-1, k, 1);
        }
    }
    
}

int main()
{
    Shah_Sayem

    int t = 1;
    //cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
