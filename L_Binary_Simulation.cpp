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
struct Tree
{
    ll sum, prop;
} tree[4*MAX];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};


void init(int node, int b, int e)
{
    if (b == e){
        tree[node].sum = arr[b];
        return;
    }

    int left = node * 2 + 1;
    int right = node * 2 + 2;
    int mid = (b + e) / 2;

    init(left, b, mid);
    init(right, mid + 1, e);
    tree[node].sum = tree[left].sum + tree[right].sum;
}

int query(int node, int b, int e, int i, int j, int carry = 0)
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

    int leftSum = query(left, b, mid, i, j, carry + tree[node].prop);
    int rightSum = query(right, mid + 1, e, i, j, carry + tree[node].prop);
    
    return leftSum + rightSum;
}

void update(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return;

    if (b >= i && e <= j){
        tree[node].sum += (e - b + 1);
        tree[node].prop++;

        return;
    }

    int left = node * 2 + 1;
    int right = node * 2 + 2;
    int mid = (b + e) / 2;

    update(left, b, mid, i, j);
    update(right, mid + 1, e, i, j);
    tree[node].sum = tree[left].sum + tree[right].sum + (e - b + 1)*tree[node].prop;
}


void solve()
{
    string s;
    cin>>s;

    int n = s.size();
    for (int i = 0; i < n; i++){
        arr[i] = s[i]-'0';
    }

    init(0, 0, n-1);
    
    int q, i, j;
    cin>>q;

    char ch;
    while (q--){
        cin>>ch;

        if (ch == 'I'){
            cin>>i>>j;

            i--, j--;
            update(0, 0, n-1, i, j);
        }
        else {
            cin>>i;
            i--;
            cout<<arr[i]<<"\n";
        }
    }  
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<": ";
        solve();
    }

    return 0;
}
