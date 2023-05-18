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

    tree[node] = min(tree[left], tree[right]);
}

int query(int node, int b, int e, int i, int j)
{
    if (b > j || e < i){
        return INT_MAX;
    }
    if (b >= i && e <= j){
        return tree[node];
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    int leftmn = query(left, b, mid, i, j);
    int rightmn = query(right, mid+1, e, i, j);

    return min(leftmn, rightmn);
}


void solve()
{
    int n, q, i, j;
    cin>>n>>q;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    init(0, 0, n-1);

    while (q--){
        cin>>i>>j;

        cout<<query(0, 0, n-1, i-1, j-1)<<"\n";
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
    }

    return 0;
}
