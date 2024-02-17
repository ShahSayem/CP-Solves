#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;

int n, q, l, k;

int arr[MAX];
int tree[4*MAX+1];

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
    tree[node] = (tree[left] & tree[right]);
}

ll query(int node, int b, int e, int i, int j)
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

    ll leftAnd = query(left, b, mid, i, j);
    ll rightAnd = query(right, mid+1, e, i, j);
    return (leftAnd & rightAnd);
}

bool isValid(int r)
{
    if (r > n || r < l)
        return false;

    ll andSum = query(0, 0, n-1, l, r-1);
    
    if (andSum < k)
        return false;
    else
        return true;
}

int mxRfind()
{
    ll low = l, high = n+2, mid;

    while (low <= high){
        mid = (low+high)/2;
        if(isValid(mid)){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    
    return high;
}

void solve()
{
    cin>>n;

    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    init(0, 0, n-1);

    cin>>q;
    int r;
    while (q--){
        cin>>l>>k;
        l--;

        r = mxRfind();

        if (r > n || r < l+1){
            cout<<-1<<" ";
        }
        else {
            cout<<r<<" ";
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
        cout<<"\n";
    }

    return 0;
}
