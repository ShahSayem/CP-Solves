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
    if(b==e){
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

    int leftSum = query(left, b, mid, i, j);
    int rightSum = query(right, mid+1, e, i, j);

    return leftSum + rightSum;
}

void update (int node, int b, int e, int target, int val)
{   if (b > target || e < target)
        return;

    if (b == target && e == target){
        tree[node] = val; //node != target

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
    int n, q;
    cin>>n>>q;

    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    init(0, 0, n-1);

    int operation, i, j, val, x;
    while (q--){
        cin>>operation;

        if (operation == 1){
            cin>>i;

            cout<<arr[i]<<"\n";
            arr[i] = 0;
            update(0, 0, n-1, i, 0);
        }
        else if (operation == 2){
            cin>>i>>val;

            arr[i] += val;
            update(0, 0, n-1, i, arr[i]);
        }
        else {
            cin>>i>>j;
            cout<<query(0, 0, n-1, i, j)<<"\n";
        }
    }
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<": \n";
        solve();
    }

    return 0;
}
