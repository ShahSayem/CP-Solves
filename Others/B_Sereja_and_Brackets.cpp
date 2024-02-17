#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
const int MAX = 1000000+5;
string s;

struct OCF
{
    int open = 0, close = 0, full = 0;
};

OCF tree[4*MAX+1];

void init(int node, int b, int e)   //b-e: range
{
    if(b == e){
        if (s[b] == '(')
            tree[node].open = 1;  
        else if (s[b] == ')')
            tree[node].close = 1;

        return;
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    init(left, b, mid);
    init(right, mid+1, e);

    int newMatch = min(tree[left].open, tree[right].close);
    tree[node].open = (tree[left].open + tree[right].open) - newMatch;
    tree[node].close = (tree[left].close + tree[right].close) - newMatch;
    tree[node].full = (tree[left].full + tree[right].full) + newMatch;
}

OCF query(int node, int b, int e, int i, int j)
{
    if (b > j || e < i){
        return {0, 0, 0};
    }

    if (b >= i && e <= j){
        return tree[node];
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    OCF leftNode = query(left, b, mid, i, j);
    OCF rightNode = query(right, mid+1, e, i, j);
    OCF temp;

    int newMatch = min(leftNode.open, rightNode.close);
    temp.full = (leftNode.full + rightNode.full) + newMatch;
    temp.open = (leftNode.open + rightNode.open) - newMatch;
    temp.close = (leftNode.close + rightNode.close) - newMatch;

    return temp;
}


int main()
{
    Shah_Sayem

    cin>>s;

    int n = s.size(), q, l, r;
    cin>>q;
    init(0, 0, n-1);

    OCF x;
    while (q--){
        cin>>l>>r;
        l--, r--;

        x = query(0, 0, n-1, l, r);
        cout<<2*x.full<<"\n"; 
    }
    
    return 0;
}
