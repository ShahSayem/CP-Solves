#include <bits/stdc++.h>
using namespace std;

const int MAX = 100000+5;
int sqroot;
int freq[MAX];

struct query{
    int left, right, idx;
};

bool cmp (query Q1, query Q2)
{
    if (Q1.left/sqroot == Q2.left/sqroot){
        return Q1.right > Q2.right;
    }

    return Q1.left/sqroot < Q2.left/sqroot;
}

void solve (int n, int q)
{
    query Q[MAX];
    memset(freq, 0, sizeof(freq));

    sqroot = sqrt(n)+1;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];

        freq[arr[i]]++;
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
    int b = 0, e = -1, currMXfreq = 0, val;

    for (int i = 0; i < q; i++){
        l = Q[i].left;
        r = Q[i].right;
        l--, r--;

        while (e < r){  
            e++;
            currMXfreq = max(freq[arr[e]], currMXfreq);

            if (currMXfreq == freq[arr[e]])
                val = arr[e];
        }

        while (e > r){ 
            currMXfreq = max(freq[arr[e]], currMXfreq);

            if (currMXfreq == freq[arr[e]])
                val = arr[e];

            e--;
        }

        while (b > l){  
            b--;
            currMXfreq = max(freq[arr[b]], currMXfreq);

            if (currMXfreq == freq[arr[b]])
                val = arr[b];
        }

        while (b < l){
            currMXfreq = max(freq[arr[b]], currMXfreq);

            if (currMXfreq == freq[arr[b]])
                val = arr[b];

            b++;
        }

        ans[Q[i].idx] = val;   
    }

    for (int i = 0; i < q; i++){
        cout<<ans[i]<<"\n";
    }
}

int main()
{
    int n, q;
    cin>>n;
    while (n){
        cin>>q;
        solve(n, q);
    }
          
    return 0;
}
