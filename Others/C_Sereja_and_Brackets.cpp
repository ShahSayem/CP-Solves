#include<bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

struct  OCF{
    int open, close, full;
};

const int MAX = 1000000;
OCF tree[4*MAX+1];

void init(int node, int b, int e, string &s)   //b-e: range
{
    if(b == e){
        if (s[b] == '('){
            tree[node].open = 1;
            tree[node].close = 0;
        }
        else{
            tree[node].open = 0;
            tree[node].close = 1;
        }

        tree[node].full = 0;

        return;
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    init(left, b, mid, s);
    init(right, mid+1, e, s);

    int newMatch = min(tree[left].open, tree[right].close);
    tree[node].full = (tree[left].full + tree[right].full) + newMatch;
    tree[node].close = (tree[left].close + tree[right].close) - newMatch;
    tree[node].open = (tree[left].open + tree[right].open) - newMatch;
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

    OCF leftAns = query(left, b, mid, i, j);
    OCF rightAns = query(right, mid+1, e, i, j);

    OCF temp;
    int newMatch = min(leftAns.open, rightAns.close);
    temp.open = (leftAns.open + rightAns.open) - newMatch;
    temp.close = (leftAns.close + rightAns.close) - newMatch;
    temp.full = (leftAns.full + rightAns.full) + newMatch;

    return temp;
} 


int main ()
{
    Shah_Sayem

    string s;
    cin>>s;

    int n, q;  
    cin>>q;

    n = s.size();

    init(0, 0, n-1, s);

    int l, r;
    while (q--){
        cin>>l>>r;
        l--, r--;

        cout<<query(0, 0, n-1, l, r).full*2<<"\n";
    } 

    return 0;
}