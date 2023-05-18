#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 1000000+5;

ll arr[MAX];
ll tree[4*MAX+1];

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

    ll leftmx = query(left, b, mid, i, j);
    ll rightmx = query(right, mid+1, e, i, j);
    return max(leftmx, rightmx);
}

ll solve(int mn, int mx)
{
    ll ans = 0;
    for (int i = mn; i <= mx; i++){
        ans = max(arr[i], ans);
    }
    
    return ans;
}

int main()
{
    //Shah_Sayem

    bool check = 0;
    ll cnt = 1;
    ll x;
    for (int i = 1; i <= MAX; i++){
        x = i;
        check = 0;
        while (x != 1){
            if (x%2){
                x = 3*x + 1;
            }
            else {
                x /= 2;
            }
            cnt++;

            if (x < MAX && arr[x]){
                cnt += arr[x];
                arr[i] = cnt;
                check = 1;
                cnt = 0;
                break;
            }
        }
        
        if (!check){
            arr[i] = cnt;
        }
        cnt = 0;
    }
    init(0, 0, MAX-1);

    int i, j, mx, mn;
    ll ans;
    while (cin>>i>>j){
        cout<<i<<" "<<j<<" ";
        mx = max(i, j);
        mn = min(i, j);
        ans = query(0, 0, MAX-1, mn, mx);

        //ans = solve(mn, mx);
        cout<<ans<<"\n";
    }

    return 0;
}
