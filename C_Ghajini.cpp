#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 100000;

//int dp[MAX];
struct ghajini
{
    int mn, mx;
};

int arr[MAX];
ghajini tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};


void init(int node, int b, int e)   //b-e: range
{
    if(b == e){
        tree[node].mx = arr[b];
        tree[node].mn = arr[b];

        return;
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    init(left, b, mid);
    init(right, mid+1, e);
    tree[node].mx = max(tree[left].mx, tree[right].mx);
    tree[node].mn = min(tree[left].mn, tree[right].mn);
}

ghajini query(int node, int b, int e, int i, int j)
{
    if (b > j || e < i){
        return {INT_MAX/2, 0};
    }

    if (b >= i && e <= j){
        return {tree[node]};
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    ghajini MX;
    int mx1, mn1, mx2, mn2;

    MX = query(left, b, mid, i, j);

    mx1 = MX.mx;
    mn1 = MX.mn;

    MX = query(right, mid+1, e, i, j);
    mx2 = MX.mx;
    mn2 = MX.mn;

    MX.mn = min(mn1, mn2);
    MX.mx = max(mx1, mx2);

    return MX;
}

void solve()
{
    int n, d;
    cin>>n>>d;

    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    init(0, 0, n-1);

    int i = 0, j = d-1, mxAns = 0;
    while (j <= n-1){
        ghajini ans = query(0, 0, n-1, i, j);

        mxAns = max(ans.mx-ans.mn, mxAns);

        if (j == n-1)
            break;

        i ++;
        j ++;

        if (j > n-1)
            j = n-1;
    }
    
    cout<<mxAns;
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";

        memset(arr, 0, sizeof(arr));
    }

    return 0;
}
