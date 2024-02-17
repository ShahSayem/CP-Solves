#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const int MAX = 100000+5;
int sqroot;

struct query{
    int left, right, idx;
};
query Q[MAX];

bool cmp (query Q1, query Q2)
{
    if (Q1.left/sqroot == Q2.left/sqroot){
        return Q1.right < Q2.right;
    }

    return Q1.left/sqroot < Q2.left/sqroot;
}

void solve()
{
    int n, q;
    cin>>n>>q;

    sqroot = sqrt(n)+1;
    int arr[n], freq[MAX];
    memset(freq, 0, sizeof(freq));
    
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int l, r;

    for (int i = 0; i < q; i++){
        cin>>l>>r;

        Q[i].left = l;
        Q[i].right = r;
        Q[i].idx = i;
    }

    sort(Q, Q+q, cmp);
    int ans[q];
    int b = 0, e = -1, distElem = 0;

    for (int i = 0; i < q; i++){
        l = Q[i].left;
        r = Q[i].right;
        l--, r--;

        while (e < r){  
            e++;

            if (!freq[arr[e]])
                distElem++;

            freq[arr[e]]++;
        }

        while (e > r){ 
            freq[arr[e]]--;

            if (!freq[arr[e]])
                distElem--;
            e--;
        }

        while (b > l){  
            b--;

            if (!freq[arr[b]])
                distElem++;

            freq[arr[b]]++;
        }

        while (b < l){
            freq[arr[b]]--;

            if (!freq[arr[b]])
                distElem--;

            b++;
        }

        ans[Q[i].idx] = distElem;   
    }

    for (int i = 0; i < q; i++){
        cout<<ans[i]<<"\n";
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
