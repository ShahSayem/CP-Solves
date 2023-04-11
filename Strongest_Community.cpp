#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 100000+5;

int arr[MAX];
int freq[MAX];
int fOcc[MAX];
int lOcc[MAX];
int tree[4*MAX+1];

void init(int node, int b, int e)   //b-e: range
{
    if(b == e){
        tree[node] = freq[b];

        return;
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = max(tree[left], tree[right]);
}

ll query(int node, int b, int e, int i, int j)
{
    if (b > j || e < i){
        return INT_MIN;
    }

    if (b >= i && e <= j){
        return tree[node];
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    ll leftMX = query(left, b, mid, i, j);
    ll rightMX = query(right, mid+1, e, i, j);
    return max(leftMX, rightMX);
}

void solve()
{
    int n, c, q, idx;
    cin>>n>>c>>q;

    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin>>arr[i];

        if (!mp[arr[i]]){
            idx = i;
        }
 
        mp[arr[i]]++;
        fOcc[i] = idx;
    }

    for (int i = 0; i < n; i++){
        freq[i] = mp[arr[i]];
    }

    mp.clear();
    for (int i = n-1; i >= 0; i--){
        if (!mp[arr[i]]){
            idx = i;
        }
 
        mp[arr[i]]++;
        lOcc[i] = idx;
    }
    
    init(0, 0, n-1);
    
    int i, j, x, y, segAns;
    while (q--){
        cin>>i>>j;
        i--, j--;

        if (arr[i] == arr[j]){
            cout<<j-i+1<<"\n";
            continue;
        }

        x = lOcc[i]-i+1;
        y = j-fOcc[j]+1;
        segAns = query(0, 0, n-1, lOcc[i]+1, fOcc[j]-1);

        cout<<max({x, y, segAns})<<"\n";
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
