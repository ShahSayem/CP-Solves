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
pair <int, int> tree[4*MAX];
///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void init(int node, int b, int e)   //b-e: range
{
    if(b == e){
        tree[node].first = arr[b];
        tree[node].second = b;

        return;
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    init(left, b, mid);
    init(right, mid+1, e);

    if (tree[left].first > tree[right].first)
        tree[node] = tree[left];
    else 
        tree[node] = tree[right];
}

pair <int, int> query(int node, int b, int e, int i, int j)
{
    if (b > j || e < i){
        pair <int, int> temp;
        temp.first = INT_MIN;
        return temp;
    }
    if (b >= i && e <= j){
        return tree[node];
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    pair <int, int> leftmx = query(left, b, mid, i, j);
    pair <int, int> rightmx = query(right, mid+1, e, i, j);

    if (leftmx.first > rightmx.first)
        return leftmx;
    else 
        return rightmx;
}

void update (int node, int b, int e, int target, int val)
{   if (b > target || e < target)
        return;

    if (b == target && e == target){
        tree[node].first = val; //node != target

        return;
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    update(left, b, mid, target, val);
    update(right, mid+1, e, target, val);

    if (tree[left].first > tree[right].first)
        tree[node] = tree[left];
    else 
        tree[node] = tree[right];
}


void solve()
{
    int n, q;
    cin>>n;

    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cin>>q;
    init(0, 0, n-1);

    int i, j, val, x, y, idx;
    char operation;
    while (q--){
        cin>>operation;

        if (operation == 'U'){
            cin>>i>>val;
            i--;

            arr[i] = val;
            update(0, 0, n-1, i, val);
        }
        else {
            cin>>i>>j;
            --i, --j;
            
            x = query(0, 0, n-1, i, j).first;
            idx = query(0, 0, n-1, i, j).second;
            update(0, 0, n-1, idx, -1);

            y = query(0, 0, n-1, i, j).first;
            update(0, 0, n-1, idx, x);
            cout<<x+y<<"\n";
        }
    }
}

int main()
{
    Shah_Sayem

    solve();

    return 0;
}
