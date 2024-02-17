#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll; 
const int MAX = 100000;

int arr[MAX];
int tree[4*MAX+1];

int query(int node, int b, int e, int i, int j, int total)
{
    if (b > j || e < i){
        return 0;
    }

    if (b == i && e == j){
        total += tree[node];
        //cout<<"total 1 "<<total<<"\n";
        return total;
    }

    total += tree[node];

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    if (b <= i && mid >= j)
        total = query(left, b, mid, i, j, total);
    else
        total = query(right, mid+1, e, i, j, total);

    //cout<<"total2 "<<total<<"\n";
    return total;
}

void update (int node, int b, int e, int i, int j)
{   
     if (i > e || j < b)
        return;

    
    if (b >= i && e <= j){
        tree[node]++; 

        return;
    }

    int left = node*2 + 1;
    int right = node*2 + 2;
    int mid = (b+e)/2;

    update(left, b, mid, i, j);
    update(right, mid+1, e, i, j);
}

void solve()
{
    string s;
    cin>>s;

    int n = s.size();
    for (int i = 0; i < n; i++){
        arr[i] = s[i]-'0';
    }
    
    int q, i, j, x;
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
            x = query(0, 0, n-1, i, i, 0);

            if (x%2){
                cout<<!arr[i]<<"\n";
            }
            else {
                cout<<arr[i]<<"\n";
            }
        }
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

        memset(tree, 0, sizeof(tree));
    }

    return 0;
}
