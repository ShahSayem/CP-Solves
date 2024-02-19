#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;

int arr[MAX], m;
//mode: 1.Min, 2.Max, 3.Sum 4.Mul
class SegTree {
public:    
    vector <ll> tree;
    SegTree(int n){
        tree.resize(4*n+1);
    }
    
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


        tree[node] = (tree[left] * tree[right])%m;
    }

    ll query(int node, int b, int e, int i, int j)
    {
        if (b > j || e < i){
                return 1;
        }

        if (b >= i && e <= j){
            return tree[node] % m;
        }

        int left = node*2 + 1;
        int right = node*2 + 2;
        int mid = (b+e)/2;

        ll leftQ = query(left, b, mid, i, j);
        ll rightQ = query(right, mid+1, e, i, j);

        return (leftQ * rightQ) % m;
    }

    void update (int node, int b, int e, int target, int val)
    {   
        if (b > target || e < target)
            return;

        if (b == target && e == target){
            tree[node] = val; //node != target (target -> array idx)
                            //node -> tree idx
            return;
        }

        int left = node*2 + 1;
        int right = node*2 + 2;
        int mid = (b+e)/2;

        update(left, b, mid, target, val);
        update(right, mid+1, e, target, val);

        tree[node] = (tree[left] * tree[right]) %  m;
    }
};

void solve()
{
    ll n, l, r;
    cin>>n>>m;

    ll x, mul = 1;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>arr[i];

        //mul = (1LL*v[i])*mul;
    }
    
    SegTree sg(n);
    sg.init(0, 0, n-1);
    string s;
    cin>>s;
    //Operation
    l = 0, r = n-1;
    for (int i = 0; i < n; i++){
        x = sg.query(0, 0, n-1, l, r);
        x %= m;
        cout<<x<<" ";

        if (s[i] == 'L'){
            //mul = mul / v[l];
            l++;
        }
        else { //R
            //mul = mul / v[r];
            r--;
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
