#include<bits/stdc++.h>
using namespace std;

class SGTree {
public:
    vector <int> tree;
    SGTree(int n){
        tree.resize(4*n+1);
    }

    void init(int node, int b, int e, int arr[], bool check)   //b-e: range
    {
        if(b == e){
            tree[node] = arr[b];

            return;
        }

        int left = node*2 + 1;
        int right = node*2 + 2;
        int mid = (b+e)/2;

        init(left, b, mid, arr, !check);
        init(right, mid+1, e, arr, !check);

        if (check)
            tree[node] = (tree[left] | tree[right]);
        else 
            tree[node] = (tree[left] ^ tree[right]);
    }

    void update (int node, int b, int e, int target, int val, bool check)
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

        update(left, b, mid, target, val, !check);
        update(right, mid+1, e, target, val, !check);

        if (check)
            tree[node] = (tree[left] | tree[right]);
        else 
            tree[node] = (tree[left] ^ tree[right]);
    } 
};


void solve()
{
    int n, q;  
    cin>>n>>q;

    int el = pow(2, n);
    int arr[el];
    for (int i = 0; i < el; i++){   
        cin>>arr[i];
    } 
    SGTree sg(el);

    if (n%2)
        sg.init(0, 0, el-1, arr, 1);
    else 
        sg.init(0, 0, el-1, arr, 0);

    int idx, val;
    while (q--){
        cin>>idx>>val;
        idx--;

        if (n%2)
            sg.update(0, 0, el-1, idx, val, 1);
        else
            sg.update(0, 0, el-1, idx, val, 0);

        arr[idx] = val;

        cout<<sg.tree[0]<<"\n";
    }
}

int main ()
{
    int t = 1;
    //cin>>t;

    while (t--)
        solve();  

    return 0;
}