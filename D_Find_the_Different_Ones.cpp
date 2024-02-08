#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;

int arr[MAX];
// mode: 1.Min, 2.Max, 3.Sum 
class SegTree {
public:    
    int tree[4*MAX+1];
    
    void init(int node, int b, int e, int mode)   //b-e: range
    {
        if(b == e){
            tree[node] = arr[b];

            return;
        }

        int left = node*2 + 1;
        int right = node*2 + 2;
        int mid = (b+e)/2;

        init(left, b, mid, mode);
        init(right, mid+1, e, mode);

        if (mode == 1)
            tree[node] = min(tree[left], tree[right]);
        else if (mode == 2)
            tree[node] = max(tree[left], tree[right]);
        else //3
            tree[node] = tree[left] + tree[right];
    }

    ll query(int node, int b, int e, int i, int j, int mode)
    {
        if (b > j || e < i){
            if (mode == 1)
                return LLONG_MAX;
            else if (mode == 2)
                return LLONG_MIN;
            else //3
                return 0;
        }

        if (b >= i && e <= j){
            return tree[node];
        }

        int left = node*2 + 1;
        int right = node*2 + 2;
        int mid = (b+e)/2;

        ll leftQ = query(left, b, mid, i, j, mode);
        ll rightQ = query(right, mid+1, e, i, j, mode);

        if (mode == 1)
            return min(leftQ, rightQ);
        else if (mode == 2)
            return max(leftQ, rightQ);
        else //3
            return (leftQ + rightQ);
    }

    void update (int node, int b, int e, int target, int val, int mode)
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

        update(left, b, mid, target, val, mode);
        update(right, mid+1, e, target, val, mode);

        if (mode == 1)
            tree[node] = min(tree[left], tree[right]);
        else if (mode == 2)
            tree[node] = max(tree[left], tree[right]);
        else //3
            tree[node] = tree[left] + tree[right];
    }
};

void solve()
{
    int n, q, l, r;
    cin>>n;

    map < int, vector<int> > mp;
    for (int i = 0; i < n; i++){
        cin>>arr[i];

        mp[arr[i]].push_back(i);
    }

    SegTree sgMX, sgMN;

    sgMN.init(0, 0, n-1, 1);
    sgMX.init(0, 0, n-1, 2);
    
    cin>>q;
    ll mn, mx;
    while (q--){
        cin>>l>>r;
        l--, r--;
        mn = sgMN.query(0, 0, n-1, l, r, 1);
        mx = sgMX.query(0, 0, n-1, l, r, 2);

        if (mn == mx)
            cout<<-1<<" "<<-1;
        else 
            cout<<*lower_bound(mp[mn].begin(), mp[mn].end(), l)+1<<" "<<*lower_bound(mp[mx].begin(), mp[mx].end(), l)+1;
        cout<<"\n";
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