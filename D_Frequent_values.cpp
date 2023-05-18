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


void solve (int n, int q)
{
    int idx;
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

    int l, r, x, y, segAns;
    while (q--){
        cin>>l>>r;
        l--, r--;

        if (arr[l] == arr[r]){
            cout<<r-l+1<<"\n";
            continue;
        }

        x = lOcc[l]-l+1;
        y = r-fOcc[r]+1;
        segAns = query(0, 0, n-1, lOcc[l]+1, fOcc[r]-1);

        cout<<max({x, y, segAns})<<"\n";
    }
}

int main()
{
    Shah_Sayem

    int n, q;
    while (cin>>n){
        if (n){
            cin>>q;
            solve(n, q);
        }
    }
          
    return 0;
}
